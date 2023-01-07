

# Spyro 1 Skip Intro Mod

This is a simple mod for the original Spyro the Dragon that skips the title screen, and intro cutscene. Is often used in conjunction with [my practice codes](https://discord.gg/rm4ZnjzeZR) for a faster game boot time.

This mod was created using the [psx-modding-toolchain by Redhot](https://github.com/mateusfavarin/psx-modding-toolchain). 


## Downloads
#### Main Download
 -  **Download Patch**: Download the main [xdelta patch here](https://github.com/C0mposer/Spyro-1-Skip-Intro-Mod/releases/download/Release1/spyro1_SkipIntro.xdelta), then your personal Spyro 1 bin file can be [patched here](https://hack64.net/tools/patcher.php)
 #### Other Downloads
 -  **CUE File**: Some emulators will require you to have a cue file to go along with this bin file, if you need one, you can create a cue for your patched bin [here](https://www.duckstation.org/cue-maker/)

 -  **Popstarter VCD:** To learn about creating a VCD for Popstarter to run this mod on PS2, read [this](https://pastebin.com/YsypFwJS)

## Compiling & Building

1. Compiling this mod requires the [psx-modding-toolchain by Redhot](https://github.com/mateusfavarin/psx-modding-toolchain). 
2. Once you have installed it and its pre-requisites, place the folder [from the source code download](https://github.com/C0mposer/Spyro-1-Skip-Intro-Mod/archive/refs/heads/master.zip), into the **/games/** folder of your psx-modding-toolchain directory.
3. Browse to the **/mods/SkipIntro/** directory, and open the MOD.bat file. From here you should be prompted with multiple options in a command line gui

#### Building BIN/CUE
	
	1. First type 1 then press enter to compile, then, type 1 then press enter again for the NTSC version.
	2. After it has compiled, type 4 then enter for "Build Iso", then, type 1 then press enter for the NTSC version.
	3. After it has built, your bin/cue should be in /build/

#### Generating xdelta patch
	
	1. First type 1 then press enter to compile, then, type 1 then press enter again for the NTSC version.
	6. After it has compiled, type 5 then press enter for "Generate xdetla Patch", then type 1 then press enter for the NTSC version.
	7. After it has built, your xdelta patch should be in /build/
	

## Tools Used In Creation

 - [psx-modding-toolchain by Redhot](https://github.com/mateusfavarin/psx-modding-toolchain) for the automation of compiling C code to MIPS object code targeted for the PS1, and building a bin/cue with the mod files injected correctly.
 - [Bizhawk](https://github.com/TASEmulators/BizHawk) for searching/poking PS1 ram values easily
 - [PCSX-Redux](https://github.com/grumpycoders/pcsx-redux/) for hot-reloading mods in for quick testing. Also for its debugging features.
 - [Ghidra](https://github.com/NationalSecurityAgency/ghidra) in combination with the [PSX Executable Loader Plugin](https://github.com/lab313ru/ghidra_psx_ldr) for reverse engineering functions in the game.

## Contact

If you need any help building this project, or are trying to get into spyro/game modding in general, feel free to reach out to me on discord: **Composer#7458**
