type _autoUpdater;
external _autoUpdater : _autoUpdater = "autoUpdater" [@@bs.module "electron-updater"];
external _checkForUpdatesAndNotify : _autoUpdater => unit = "checkForUpdatesAndNotify" [@@bs.send];

let checkForUpdatesAndNotify () => _checkForUpdatesAndNotify _autoUpdater;