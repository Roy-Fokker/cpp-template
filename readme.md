# C++ Template using CMake Preset


Mush of it is magic.


## Questions to follow up on
- [ ] How to add Compile Definitions and Linker Flags to CMakePreset.json?
- [ ] I guess, presets are meant to be global settings. Is it possible to create my project/application/library specific settings?
- [x] Does target_XXX_XXX (e.g. target_link_options, target_compile_definitions) methods append-to or override global settings?  
  seems to append
- [x] For VS Code, i guess it still needs a Debug Task setting? as hitting F7 or F5 when editing a file seems to build that one file?  
  Yup, need launch.json, not sure how this works in cross-platform way