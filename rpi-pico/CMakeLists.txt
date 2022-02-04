cmake_minimum_required(VERSION 3.12)

include(cmake/pico_sdk_import.cmake)

project(my_pico_projects C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

if (PICO_SDK_VERSION_STRING VERSION_LESS "1.3.0")
    message(FATAL_ERROR "Raspberry Pi Pico SDK version 1.3.0 (or later) required. Your version is ${PICO_SDK_VERSION_STRING}")
endif()

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project
macro(example_auto_set_url TARGET)
    file(RELATIVE_PATH URL_REL_PATH "${PICO_EXAMPLES_PATH}" "${CMAKE_CURRENT_LIST_DIR}")
    pico_set_program_url(${TARGET} "${PICO_EXAMPLE_URL_BASE}/${URL_REL_PATH}")
endmacro()



add_compile_options(
  -Wall
  # int != int32_t as far as the compiler is concerned because gcc has int32_t
  # as long int
  -Wno-format
  # we have some for the docs that aren't called
  -Wno-unused-function
  -Wno-maybe-uninitialized
  )


add_subdirectory(blink)

