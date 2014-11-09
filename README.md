cmake-templates
===============
This repo provides a series of mini projects, including cmake files as well as dummy sources, that target a number of typical use cases.

# Project Origin and Philosophy
There are already a number of CMake tutorials on the Internet, and I read through many when I was converting my projects to use CMake, and learning CMake in the process. What I felt missing at the time was 2 things: 1) applicable examples for various typical project setups, especially beyond the most trivial ones; 2) introducing features in an order that makes sense to someone who is either starting from scratch or adapting existing source code, but eventually want to use the build process in a rigorous way and deploy binary to production. Essentially, I want to approach build systems from the perspective of project builders, who in general want to spend as little time as possible on build system while still following best practices and using good idioms.

Since I'm a novice to CMake myself, I probably won't get everything right. However, being somewhat early in the learning process makes me closer to those who are also novices, and hopefully gives me a better chance of providing examples that are useful.

# Structure
Each subdirectory under project root is a self-contained example of a project that can be built with CMake. The NOTES.md provides some notes, but the bulk of explanation is inlined inside source files (I believe in keeping documentation close to source when possible). The examples are also numbered, which represents the suggested order of reading. That said, one is certainly welcome to dive right into any of them, as all examples are working code. However, explanations for concepts occurred in earlier examples may be omitted, to control verbosity as well as emphasize on new concepts.

# CMake Version
This project tries to conform to CMake 3.0 and its official references. 3.0 simply has superior documentation (man pages, online wiki) and many useful features. Since the latest CMake is relatively new, the default versions on many existing platforms may be older. It's not the goal of this project to cover multiple versions, although notable features, when used, will be commented on.
