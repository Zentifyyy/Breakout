-- premake5.lua
workspace "PheonProject"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "PheonProject"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "vendor/Pheon/Pheon/Build-Pheon.lua"
include "ExampleProject/Build-Pheon-Project.lua"