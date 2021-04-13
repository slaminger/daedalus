# DaedalusX64
 
DaedalusX64 is a Nintendo 64 emulator for Linux and PSP, with plans to port to Windows, Mac, PS Vita among other platforms. The PSP port is noteworthy for being the fastest N64 emulator ever on the platform, achieving close to or even full speed in many titles. This custom fork belongs to Steve Laminger, any changed you make that work well, please upstream to here or the main project for merge into the main branch, the idea is to test and then contribute to the main project, not to create a new fork.
 
## Features:
 
- Fast emulation
- High compatibility
- Support for PSP TV Mode with 480p output!
- Active support and updates
- Lots of experimental optimizations
 
And more!
 
## Usage
 
To install Daedalus to your PSP, download the latest release from the Releases page: https://github.com/DaedalusX64/daedalus/releases
 
Next, plug your PSP into your computer and navigate to /PSP/GAME/. Create a folder called "daedalus" there, and place the EBOOT.PBP file inside. Place your ROM files in daedalus/Roms/ and they will automatically appear in Daedalus.
 
Note: If the release is a ZIP file with a folder containing an EBOOT.PBP file when extracted, simply drag and drop the extracted folder into /PSP/GAME/.

## Building for Windows 

1) Clone and open the repo in Visual studio 2019

2) Build All

## Building for Linux and MAC

1) Clone this repo 

2) Open a terminal and run build_daedalus.sh with the argument for the os you would like to build for 
Example: ./build_daedalus.sh LINUX
 
## More Info
 
For information about compatibility, optimal settings and more about the emulator, visit the actively maintained GitHub wiki page: https://github.com/DaedalusX64/daedalus/wiki Feel free to submit reports for how well your favourite games run if they have not already been listed!
 
Join our Discord server to talk to other Daedalus users and the developers!
 
Invite link: https://discord.gg/FrVTpBV
 
## Credits
 
- kreationz, salvy6735, Corn, Chilly Willy: Original DaedalusX64 code
- Wally: Optimizations, improvements and ports
- z2442: Compilation improvements and updating, optimizations
- mrneo240: Optimizations, compilation help
- TheMrIron2: Optimizations, wiki maintenance
