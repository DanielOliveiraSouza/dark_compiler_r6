#!/bin/bash
rm *.{o,exe}
make
#for i in $(ls *.txt ) do 
./sintatico.exe input  teste.asm 
nasm -felf64 teste.asm -o teste.o;
clang teste.o -o teste.exe;
./teste.exe
./sintatico.exe input-2.txt teste2.asm
nasm -felf64 teste2.asm -o teste2.o;
gcc teste2.o -o teste2.exe -no-pie
./teste2.exe
