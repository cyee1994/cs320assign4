#!/bin/bash
echo Assignment 4-2.sh, Christopher Yee, christopheryee@att.net
for encryptorBreaker in $(find . -name 'prog4_2.c')
	do
	 
	 gcc $encryptorBreaker

done
	echo "test"|./encryptor | ./a.out "test"
