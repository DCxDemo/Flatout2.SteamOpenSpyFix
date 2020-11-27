# Flatout2.SteamOpenSpyFix

## What is this?

A simple online fix for Steam version of FlatOut 2 via OpenSpy service. 

## How to use?

* Install [ThirteenAG's Widescreen Patch for FlatOut 2](https://github.com/ThirteenAG/WidescreenFixesPack/releases/tag/flatout2).
* Copy Flatout2.SteamOpenSpyFix.asi to scripts folder.

## How does it work?

Just like a common retail EXE fix, it simply replaces instances of "gamespy.com" with "openspy.org". However, Steam EXE is encrypted, hence it only can be done in RAM. Code is really short and straightforward. It is not guaranteed to work on your system, but it was tested on Win7 x64 and Win10 x64. The only version compatible is Steam EXE - MD5: 5A63E9DF21C7EC6F74D6E49C603DEAE1, Size: 1071616 bytes.

## Building

This project was built in Visual Studio 2019 (v142). Shouldn't require anything extra. Make sure your project is set up to create precomiled headers and change binary extension to .asi

## Other versions?

There are no plans for other versions support in this repo.

2020, DCxDemo*.