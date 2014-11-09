# A top-level CMakeFiles.txt should always include the following two commands
cmake_minimum_required(VERSION 3.0)
project(Print)

# an executable is added by specifying the target (first argument) and all the source files needed
add_executable(print_arg print.c)
