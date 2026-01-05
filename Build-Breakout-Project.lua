-- premake5.lua
workspace "BreakoutProject"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "BreaoutProject"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "vendor/Pheon/Pheon/Build-Pheon.lua"
include "BreakoutProject/Build-Breakout-Project.lua"