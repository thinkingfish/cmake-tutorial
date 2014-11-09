cmake-tutorial
===============
This repo provides a series of mini projects to introduce core CMake features incrementally. The more complex cmake files are also useful as templates.

# Project Origin and Philosophy
There are already a number of CMake tutorials on the Internet. I read through many when I was converting my projects and learning CMake in the process. What I felt missing at the time was 2 things: 1) applicable examples for various typical project setups, especially beyond the most trivial ones; 2) introducing features in an order that makes sense to CMake novices with a real life project, who eventually want to use the build process in a rigorous way and deploy binary to production. Essentially, this project approaches build systems from the perspective of project builders- spend as little time as possible on build system while still following best practices and using good idioms.

Being a novice to CMake myself, I probably won't get everything right. But hopefully it gives me a better chance of providing examples that are useful to people in similar situations.

# Structure
Each subdirectory under project root is a self-contained example of a project that can be built with CMake. BUILD.md explains invocation and results, NOTES.md provides additional explanation/notes. There's also inlined comment inside source files. The examples are numbered, which represents the suggested order of reading. That said, one is certainly welcome to dive right into any of them, as all examples are working code. However, explanations for concepts occurred in earlier examples will not be repeated later, to control verbosity as well as to bring focus on incremental differences.

# CMake Version
This project tries to conform to CMake 3.0 and its official references. 3.0 has superior documentation (man pages, online wiki) and many useful features. Since the latest CMake is relatively new, the default versions on many existing platforms may be older. It's not the goal of this project to cover multiple versions, although notable features, when used, will be commented on.
