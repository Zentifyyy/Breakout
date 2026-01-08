# Pheon Breakout
This is an example Breakout project using the Pheon quickstart template and [Pheon](https://github.com/Zentifyyy/Pheon) as a dependency.

# Building
#### These instructions will be for windows only, support for other platforms will come in the future.

- Firstly, make sure you have [SDL3](https://github.com/libsdl-org/SDL/releases), [SDL3_ttf](https://github.com/libsdl-org/SDL_ttf/releases) and [SDL3_image](https://github.com/libsdl-org/SDL_image/releases) installed into your home directory.
- Then use this template to create your own Github repository and clone it to your system using ```git clone --recursive https://github.com/Zentifyyy/Breakout.git```
- Then run ```scripts/SetupBreakoutProject.bat``` which will generate all of the project files for you.
- Open the Visual Studio solution and add a Reference to SDL3 under SDL3_ttf and SDL3_image.
- Compile + run the project.

If you get a 'cannot open file SDL3.lib' error, go to SDL3_ttf and SDL3_image, go to properties, link and then to input and change SDL3.lib; to /x64/Debug/SDL3.lib;

### External Dependencies:
- [SDL3](https://github.com/libsdl-org/SDL)
- [SDL3_ttf](https://github.com/libsdl-org/SDL_ttf) (and included dependencies).
- [SDL3_image](https://github.com/libsdl-org/SDL_image) (and included dependencies).

### Additional
Pheon uses the [Roboto Font](https://fonts.google.com/specimen/Roboto) [(Apache License, Version 2.0)](https://www.apache.org/licenses/LICENSE-2.0).