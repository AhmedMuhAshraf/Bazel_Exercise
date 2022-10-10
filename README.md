# Bazel_Exercise

## Prerequisites
1) Build Tools for Visual Studio 2019 and C++ desktop toolchain: https://aka.ms/vs/17/release/vs_BuildTools.exe
2) install Bazel using Use Bazelisk :
  -get Admin Acces
  -open cmd using admin rights
  -run : @"%SystemRoot%\System32\WindowsPowerShell\v1.0\powershell.exe" -NoProfile -InputFormat None -ExecutionPolicy Bypass -Command "iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))" && SET "PATH=%PATH%;%ALLUSERSPROFILE%\chocolatey\bin"
  -make sure choco is installed by typing choco
  -run in the cmd: choco install bazel
3) Create an Enivornmental user var Named : BAZEL_VC and set it to the VC install directory "C:\Program Files (x86)\Microsoft Visual Studio\2022\Community\VC"


## This Exercise is intended to get used to bazel commands and environment by building a simple App.

### The Project structure is as follow :
Bazel_Exercise  <br />
&nbsp;&nbsp;app  <br />
&nbsp;&nbsp;&nbsp;&nbsp;inc  <br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;uart.h  <br />
&nbsp;&nbsp;srcs  <br />
      myapp.c  <br />
      uart.c  <br />
    BUILD  <br />
  lib  <br />
    inc  <br />
      console.h  <br />
    srcs  <br />
      console.c  <br />
    BUILD  <br />
  WORKSPACE  <br />
  .bazelrc  <br />
  
 ## Also there is another external repo (external dependency) that we load it remotely you can find at : https://github.com/AhmedMuhAshraf/Bazel_stringLib
 ### The structure is as follow :
 Bazel_stringLib  <br />
     inc  <br />
      string.h  <br />
    srcs  <br />
      string.c  <br />
    BUILD  <br />
    WORKSPACE  <br />
    def.bzl  <br />
    
 ## Your Task is to follow the required points below so as to fill the blanks in BUILD, WORKSPACE files to be able to build the project with different outputs.
 

