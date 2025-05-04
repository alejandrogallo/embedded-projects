add_executable(led-1 main.c)

# pull in common dependencies
target_link_libraries(led-1 pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(led-1)
