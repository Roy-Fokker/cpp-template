# C++ Template using CMake Preset


Mush of it is magic.


## Questions to follow up on
- [x] How to add Compile Definitions and Linker Flags to CMakePreset.json?  
  seems to be, that one must used project specific method.  
  or
  use interface library method as described by Jason Turner. 

- [x] I guess, presets are meant to be global settings. Is it possible to create my project/application/library specific settings? 
  no 

- [x] Does target_XXX_XXX (e.g. target_link_options, target_compile_definitions) methods append-to or override global settings?  
  seems to append 
  
- [x] For VS Code, i guess it still needs a Debug Task setting? as hitting F7 or F5 when editing a file seems to build that one file?  
  Yup, need launch.json, not sure how this works in cross-platform way
  
## Non-windows building/cmake configuration 
- it's broken, needs more work. 
- tried with ubuntu wsl last, perhaps need to make a copy of the files over, rather than share singular source folder.
