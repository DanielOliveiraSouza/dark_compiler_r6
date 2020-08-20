#!/bin/bash
rm *.{o,exe}
make
#for i in $(ls *.txt ) do 
./dark_cc.exe testes/input  teste.asm 
./output.exe
./dark_cc.exe testes/input-2.txt teste2.asm
./output.exe

