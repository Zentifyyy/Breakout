# Pheon Example Project
This is an example project using [Pheon](https://github.com/Zentifyyy/Pheon) as a dependency. This template is the prefered way for you to make prjects using Pheon so you dont have to include the whole of Pheon in your source code, instead you can use it as a dependency.
#

<img src="https://raw.githubusercontent.com/Zentifyyy/Pheon/refs/heads/main/PheonProject/img/icon.bmp" width=48>

Pheon is a simple GUI application framework written in C++ using SDL3, SDL3_ttf for font usage and SDL3_image for images. Pheon doesnt come with any bells or whistles and is designed for single page applications which dont need fancy looking graphics.

## Getting started
#### These instructions will be for windows only, support for other platforms will come in the future.

- Firstly, make sure you have [SDL3](https://github.com/libsdl-org/SDL/releases), [SDL3_ttf](https://github.com/libsdl-org/SDL_ttf/releases) and [SDL3_image](https://github.com/libsdl-org/SDL_image/releases) installed into your home directory.
- Then use this template to create your own Github repository and clone it to your system using ```git clone --recursive https://github.com/yourname/yourproject.git```
- Then run ```scripts/Setup-ExampleProject.bat``` which will generate all of the project files for you.
- Open the Visual Studio solution and add a Reference to SDL3 under SDL3_ttf and SDL3_image.
- Compile + run the project.

If you get a 'cannot open file SDL3.lib' error, go to SDL3_ttf and SDL3_image, go to properties, link and then to input and change SDL3.lib; to /x64/Debug/SDL3.lib;


### External Dependencies:
- [SDL3](https://github.com/libsdl-org/SDL)
- [SDL3_ttf](https://github.com/libsdl-org/SDL_ttf) (and included dependencies).
- [SDL3_image](https://github.com/libsdl-org/SDL_image) (and included dependencies).

### Additional
Pheon uses the [Roboto Font](https://fonts.google.com/specimen/Roboto) [(Apache License, Version 2.0)](https://www.apache.org/licenses/LICENSE-2.0).