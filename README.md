# Console Mod
The Console Mod for Dead by Daylight, intended to be used only on the Private Server. Enables use of a console window on the private server. 

**Works on DBD 5.7.2 and 5.6.2**

Notable Features:
- Execute commands. (duh)
- Press V to enable flying.
- Possess other characters in the game.
- Change survivors healthstates at will in the Players tab.
- Set any of 695 gameplay tags, including on other players/bots, in the players tab.
- Change the speed of the game with the "timedilation" command.
- Spawn any item in the players tab.
- Etc.

Press F10 to open the console window.

## Source File instructions

Add these folders to your "Never cook rules" in your project settings;

### UE4.25:
- DisplayK\consolemod\MainMenu\CMGUI\427

### UE4.27:
- ModLoader
- DisplayK\consolemod\DB
- DisplayK\consolemod\MainMenu\CMGUI\425

Alternatively, add the entire DisplayK folder to your never cook rules.

The Console Mod is primarily developed in Unreal Engine 4.25, the 4.27 part of the project is just widget animations at this time.

## How to use the modloader:

>"The Mod Loader will automatically spawn Actors from following locations
>
>In Menu: 
>/Game/ModLoader/Init/Menu/<ModName>
>In Lobby (When Authority):
>/Game/ModLoader/AuthorityInit/Lobby/<ModName>
>In Game (When Authority): 
>/Game/ModLoader/AuthorityInit/Game/<ModName>
>
>The <ModName> should be an Actor Blueprint in one of the following locations. <ModName> is derived from the .pak filename, specifically it's middle part. For example, >for pak "pakchunk51ArchTestDLC-WindowsNoEditor.pak", the <ModName> would be 'ArchTestDLC' "

-Arch
