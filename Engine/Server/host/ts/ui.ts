const Koa = require("koa");
import Router from "@koa/router";
const auth = require("koa-basic-auth");
import * as http from "http";
import { Settings } from "./settings";
import { register, getAggregatedMetrics } from "./systems/metricsSystem";

let gScampServer: any = null;

let metricsAuth: { user: string; password: string } | null = null;

const metricsAuthParse = (settings: Settings): void => {
  const authConfig = settings.allSettings?.metricsAuth as { user?: string; password?: string } | undefined;
  if (!authConfig) {
    console.log('Metrics auth is not configured, so it will be inaccessible. Set metricsAuth setting to activate');
    return;
  }
  if (!authConfig.user || !authConfig.password) {
    console.error('metricsAuth setting must contain user and password fields');
    return;
  }
  metricsAuth = { user: authConfig.user, password: authConfig.password };
}

const createApp = () => {
  const app = new Koa();

  app.use(async (ctx: any, next: any) => {
    try {
      await next();
    } catch (err: any) {
      if (401 === err.status) {
        ctx.status = 401;
        ctx.set("WWW-Authenticate", "Basic realm=\"metrics\"");
      } else {
        throw err;
      }
    }
  });

  const router = new Router();

  router.use('/metrics', (ctx: any, next: any) => {
    console.log(`Metrics requested by ${ctx.request.ip}`);
    return next();
  });

  if (metricsAuth) {
    if (metricsAuth.password !== "I know what I'm doing, disable metrics auth") {
      router.use("/metrics", auth({ name: metricsAuth.user, pass: metricsAuth.password }));
    }
    router.get("/metrics", async (ctx: any) => {
      ctx.set("Content-Type", register.contentType);
      ctx.body = await getAggregatedMetrics(gScampServer);
    });
  } else {
    router.get("/metrics", async (ctx: any) => {
      ctx.throw(401);
      console.error("Metrics endpoint is protected by authentication, but no credentials are configured");
    });
  }

  app.use(router.routes()).use(router.allowedMethods());
  return app;
};

export const setServer = (scampServer: any) => {
  gScampServer = scampServer;
};

export const main = (settings: Settings): void => {
  metricsAuthParse(settings);

  const uiListenHost = settings.allSettings.uiListenHost as (string | undefined);
  const uiPort = settings.port === 7777 ? 3000 : settings.port + 1;

  const app = createApp();
  console.log(`Metrics endpoint is listening on ${uiPort}`);
  const server = http.createServer(app.callback());
  server.listen(uiPort, uiListenHost);
};
