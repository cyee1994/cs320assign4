#!/bin/bash
echo Assignment 4-3.sh, Christopher Yee, christopheryee@att.net
offset=$1

for prog3 in $(find . -name 'prog4_3.c')
	do
	 
	 gcc $prog3
		
	done


for encFiles in *.enc

	do
	
	  echo $encFiles|./a.out "$offset"> "$encFiles.dec"

	done




