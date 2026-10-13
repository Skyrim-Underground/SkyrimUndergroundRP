# SPDX-License-Identifier: AGPL-3.0-or-later

# Compile and link flags shared by every SUG C++ target, beyond what C++20 mode and CMake already set.
function(sug_target_defaults target)
  if(MSVC)
    target_compile_options(${target} PRIVATE /WX /MP /utf-8 /Zc:__cplusplus /Zc:preprocessor)
    # Release keeps full PDBs, and /DEBUG would otherwise turn the linker's dead-code removal off.
    target_link_options(${target} PRIVATE "$<$<CONFIG:Release>:/DEBUG:FULL;/OPT:REF;/OPT:ICF;/INCREMENTAL:NO>")
  endif()
endfunction()
