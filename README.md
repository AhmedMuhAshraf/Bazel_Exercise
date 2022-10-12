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

The project is a simple app which prints different outputs on the console based on the build options that we provide,
We got 3 options :
1) providing "job=actor"
2) providing "job=hero"
3) providing anyother value to job or not providing at all
each steps will print different string on the console.

### The Project structure is as follow :
Bazel_Exercise  <br />
&nbsp;&nbsp;app  <br />
&nbsp;&nbsp;&nbsp;&nbsp;inc  <br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;uart.h  <br />
&nbsp;&nbsp;&nbsp;&nbsp;srcs  <br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;myapp.c  <br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;uart.c  <br />
&nbsp;&nbsp;&nbsp;&nbsp;BUILD  <br />
&nbsp;&nbsp;lib  <br />
&nbsp;&nbsp;&nbsp;&nbsp;inc  <br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;console.h  <br />
&nbsp;&nbsp;&nbsp;&nbsp;srcs  <br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;console.c  <br />
&nbsp;&nbsp;&nbsp;&nbsp;BUILD  <br />
&nbsp;&nbsp;WORKSPACE  <br />
&nbsp;&nbsp;.bazelrc  <br />
  
 ### Also there is another external repo (external dependency) that we load it remotely (No Need to clone bazel will do it intrnally) you can find at : https://github.com/AhmedMuhAshraf/Bazel_stringLib he structure is as follow :
 Bazel_stringLib  <br />
&nbsp;&nbsp;inc  <br />
&nbsp;&nbsp;&nbsp;&nbsp;string.h  <br />
&nbsp;&nbsp;srcs  <br />
&nbsp;&nbsp;&nbsp;&nbsp;string.c  <br />
&nbsp;&nbsp;BUILD  <br />
&nbsp;&nbsp;WORKSPACE  <br />
&nbsp;&nbsp;def.bzl  <br />
    
 ## Task
 ### Your Task is to follow the required points below so as to fill the blanks in BUILD, WORKSPACE files to be able to build the project with different outputs.
 ##### Bazel_stringLib
 1) Clone the Bazel_stringLib repo 
 2) Take a branch
 3) open the BUILD file 
 4) follow the comments and implement the required
 5) commit and push to your branch then fetch your commit hash and keep it for later
 ##### Bazel_Excersie
 1) Clone the Bazel_Excersie repo
 2) open the WORKSPACE file
 3) follow the comments and implement the required
 4) open app/BUILD
 5) follow the comments and implement the required
 6) open lib/BUILD
 7) follow the comments and implement the required
 
 After doing all the steps cloning the main repo try oppening cmd and type :  <br />
bazel build //app:myapp  <br />
bazel build //app:myapp --job=hero  <br />
bazel build //app:myapp --job=actor  <br />

after each of the previous steps you will find myapp.exe file created at the path 'Bazel_Exercise\bazel-bin\app' try to Run it and check the different outputs

