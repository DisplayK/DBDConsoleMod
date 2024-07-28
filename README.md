# Console Mod
The Console Mod for Dead by Daylight, intended to be used only on the Private Server. Enables use of a console window on the private server. 

**Works on DBD 6.5.2 (Not tested yet, still wip)**

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

## Project instructions (For use with Unreal Engine)
The project no longer uses UE4.25

- Righ click the "DeadByDaylight.uproject" file and select "Generate visual studio project files"
- Open "DeadByDaylight.sln" with Visual Studio
- In the "Solution Explorer", under "Game", right click "DeadByDaylight" and select build

After it has completed the project is installed and can be opened in UE4.27.2

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
