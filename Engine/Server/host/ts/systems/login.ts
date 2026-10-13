import { System, Log, Content, SystemContext } from "./system";
import { loginsCounter, loginErrorsCounter } from "./metricsSystem";

// See also NetworkingCombined.h
// In NetworkingCombined.h, we implement a hack to prevent the soul-transmission bug
export class Login implements System {
  systemName = "Login";

  constructor(
    private log: Log,
    private devOfflineLogin: boolean
  ) { }

  async initAsync(ctx: SystemContext): Promise<void> {
    this.log(
      this.devOfflineLogin === true
        ? "devOfflineLogin is on: any numeric profileId logs in (local development only)"
        : "devOfflineLogin is off: every login is refused until the launcher token login exists"
    );
  }

  disconnect(userId: number): void {
  }

  customPacket(
    userId: number,
    type: string,
    content: Content,
    ctx: SystemContext,
  ): void {
    if (type !== "loginWithSkympIo") {
      return;
    }

    const ip = ctx.svr.getUserIp(userId);
    console.log(`Connecting a user ${userId} with ip ${ip}`);

    const gameData = content["gameData"];
    if (this.devOfflineLogin === true && gameData && typeof gameData.profileId === "number") {
      const profileId = gameData.profileId;
      this.emit(ctx, "spawnAllowed", userId, profileId);
      loginsCounter.inc();
      this.log(userId + " logged as " + profileId);
    } else {
      const reason = this.devOfflineLogin === true
        ? "gameData.profileId is not a number"
        : "devOfflineLogin is off and the launcher token login does not exist yet";
      loginErrorsCounter.inc({ reason: "refused" });
      this.log(`Login refused for user ${userId}: ${reason}`);
      ctx.svr.kick(userId);
    }
  }

  private emit(ctx: SystemContext, eventName: string, ...args: unknown[]) {
    (ctx.gm as any).emit(eventName, ...args);
  }
}
