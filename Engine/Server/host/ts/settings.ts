import * as fs from 'fs';

export class Settings {
  port = 7777;
  gamemodePath = '...';
  startPoints = [
    {
      pos: [133857, -61130, 14662],
      worldOrCell: '0x3c',
      angleZ: 72,
    },
  ];
  devOfflineLogin = false;

  allSettings: Record<string, unknown> | null = null;

  constructor() { }

  static async get(): Promise<Settings> {
    if (!Settings.cachedPromise) {
      Settings.cachedPromise = (async () => {
        const res = new Settings();
        await res.loadSettings();  // Load settings asynchronously
        return res;
      })();
    }

    return Settings.cachedPromise;
  }

  private async loadSettings() {
    if (fs.existsSync('./skymp5-gamemode')) {
      this.gamemodePath = './skymp5-gamemode/gamemode.js';
    } else {
      this.gamemodePath = './gamemode.js';
    }

    const settings = JSON.parse(fs.readFileSync('server-settings.json', 'utf8'));
    [
      'port',
      'gamemodePath',
      'startPoints',
      'devOfflineLogin',
    ].forEach((prop) => {
      if (settings[prop]) {
        (this as Record<string, unknown>)[prop] = settings[prop];
      }
    });

    this.allSettings = settings;
  }

  private static cachedPromise: Promise<Settings> | null = null;
}
