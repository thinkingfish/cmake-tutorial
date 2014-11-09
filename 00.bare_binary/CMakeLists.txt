# A top-level CMakeFiles.txt should always include the following two commands
cmake_minimum_required(VERSION 3.0)
project(Print)

# executable are added by specifying the target (first argument) and all the source files needed
add_executable(print_arg print.c)
