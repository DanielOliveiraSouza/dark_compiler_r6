#!/bin/bash
if [   "$(which nasm)"  = "" ]; then sudo apt-get install nasm -y ; fi 
	
rm *.{o,exe}
make
#for i in $(ls *.txt ) do 
./dark_cc.exe testes/input  teste.asm 
./teste.asm.exe
./dark_cc.exe testes/input-2.txt teste2.asm
./teste2.asm.exe

