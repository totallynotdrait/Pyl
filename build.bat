:: This is build.bat, compiles shell.c and runs the compiled program in the folder 'build'
:: If you get errors when this script is runned, the errors might be because of gcc or the path of the compiled program is invalid

@echo off

gcc src/shell.c src/executer.c src/error.c -o build/shell
build/shell.exe os.pyl

exit