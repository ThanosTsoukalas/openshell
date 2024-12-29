# Openshell
Openshell is a custom shell interface/command line that I created as a hobby project in order to learn C++. It is extremely basic at the moment, but I am looking forward to adding more features to it in the future.

![image](https://github.com/user-attachments/assets/23647611-9780-49bd-82c9-3e1467a02cc3)

# Where to find test binaries
If you want to experimentally test openshell without downloading a stable release, you can opt out for the _binaries_ folder, where the latest test build of openshell is located. (Currently only available for Windows Users, but can also work with the _Wine_ compatibility layer for Unix-based systems).

# This is a portable project 
Unlike most applications, openshell can be downloaded and run on any version of Windows, either 32 or 64bit, including legacy versions (like Windows 95, 98, XP, etc.).
# Linux Support
I am a Windows user, but this project was made with cross-platform in mind. Pretty soon I am going to add Linux support. (In fact, Linux might actually be able to run this project without any modifications; however I am not sure if any instabilities are going to occur in the runtime).

# CMake
If you are working on Visual Studio for this project, as I am, then you should have no problem compiling from source.

# System Requirements
- Any single or multi-core CPU should theoretically work with openshell
- Your system needs to have at least 1.5 MB of unallocated RAM at any moment, excluding the RAM that system daemons allocate
- Your system ideally needs to run Windows (any version should work, even legacy ones), but Unix-based systems can also run openshell with some minor modifications like a charm
- Your system needs to have at least 350 MB of permanent storage.

The system requirements may seem dumb (considering modern hardware), but my goal with openshell is to create a portable shell that can be ported to any kind of computing machine; from computers made 20 years ago to even the most sophisticated supercomputer.
