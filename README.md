# Hunt DMA Cheat
Fully Featured Hunt DMA Cheat With Chams, Fuser ESP, Overlay mode.

> [!NOTE]
Currently needs update

## Showcase
<p align="Left">
  <img src="Images/6.png" alt="Play Video" width="1280" height="540">
</p>
<p align="Left">
  <img src="Images/5.png" alt="Play Video" width="1280" height="540">
</p>
<p align="Left">
  <img src="Images/2.png"
    style="width: 100%;" />
</p>
<p align="Left">
  <img src="Images/4.png"
    style="width: 100%;" />
</p>
  
  
> [!IMPORTANT]
> * You need to build this project first. I suggest using Visual Studio and building in **Release** configuration.  
> * [Installation Guide](./Instructions.md)
> * Open/close menu key - **Insert** or **Home**
> * Close menu - **Escape** or click outside the menu
> * Exit app - **Home + End**

## Fixed and Supported Features
* Player ESP
  * Name
  * Distance
  * Health
  * Chams
  * Friendly Color
  * Cham Color
  * Player list
  * Hold TAB for radar
* Boss ESP
  *  Name
  *  Distance
* Supply ESP
  * Name
  * Distance
  * Toggalable types
* BloodBound ESP
  * Name
  * Distance
* Trap ESP
  * Name
  * Distance
  * Toggalable types
* Points of Interest ESP
  * Name
  * Distance
  * Toggalable types
* Config
  * Load
  * Save
* Spectating alarm
* FPS
* Auto SystemGlobalEnvironment offset detection (thanks [@Spookyisnice](https://github.com/spookyisnice))
* Crosshair rendering
* Overlay mode
  * Prevent recording

### Overlay mode
If you have single pc setup, you should enable this mode in the settings. Cheat will draw on top of everything.  
Also, only in this mode transparency is supported (with fuser transparency is impossible).  
Also works in fullscreen mode, tho it will switch to desctop if clicked in the menu (because it's different window).  

### Player ESP
Chams are recommended to write after teammates are no longer tagged as enemy players or after raid starts.  
HP is: **current**/**current max(is not potential max if hunter is burning)**[**potential max hp after after all burns are healed**]

### Supply ESP
You can choose only your type of ammo, esp will show only nessesary items.

### Trap ESP
Also all types of barrels and darksight dynamite. Toggalable.

### Points of Interest ESP
- extraction points
- normal cash registers
- pouches
- clues
- posters
- blueprints
- gun oil
- **traits**
- Halloween's pumpkins

### Spectating alarm
Can't be turned off. Shows you red frame and in big green number how many players are spectating you. Your teammates counts!

### Mouse-only controls supported
Now can be controlled only via mouse: if you stick your cursor to the edge of the window, or move to the other screen, menu will close. Menu will open again when you move mouse back. And "app exit" button in the settings.

# Known Issues
- Teammates are shown as enemies
- Chams don't work
- Dummy's hp in shooting range is incorrect

# Todo
- [ ] Beetle ESP
- [ ] Auto medkit esp turn on when low hp
- [ ] Teams
- [ ] View what is in player's hands
- [ ] Add Icons to ESP
- [x] Overlay mode
- [x] Dark Sight Dynamite ESP
- [x] Perks ESP/chams
- [x] Draw player list like in Mr Smile's cheat
- [x] Draw ObjectCount
- [x] Add close button for the menu
- [x] Fix spider not showing
- [x] Don't show players if their hp is <= 0 or > 150
- [x] Fix "Draw friendly"
- [x] Fix all "Enable" buttons
- [x] Spectator count
- [x] Expand Supply ESP with different tags
- [x] Add Golden Cash Register ESP
- [x] Add POI ESP
- [x] Draw players HP
- [x] Perks ESP/chams
- [x] Move configs to the same folder as HuntDMA.exe (previously at User/Documents/Hunt/Default.json.json)

## Credits
* [PCILeech](https://github.com/ufrisk/pcileech)
* [MemProcFS](https://github.com/ufrisk/MemProcFS)
* [insanefury](https://www.unknowncheats.me/forum/3809820-post343.html)
* [DMALibrary](https://github.com/Metick/DMALibrary/tree/Master)
* [Original HuntDMA by InterSDM](https://github.com/IntelSDM/HuntDMA)
* All amazing folks on [UnknownCheats](https://www.unknowncheats.me/forum/other-fps-games/350352-hunt-showdown.html)
