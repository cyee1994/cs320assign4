#!/bin/bash
#!/usr/local/bin/expect

echo Assignment 4-1, Christopher Yee, christopheryee@att.net


username=$(grep "$3 $4" $1 | cut -d " " -f1 | tr "[:upper:]" "[:lower:]")
password=$(grep "$3 $4" $1 | cut -d "," -f3)

expect -c "
	log_user 0
	spawn rsync -av --include '*.enc' $username@$2: .
	expect password: { send $password\r }
	spawn scp -rv $username@$2:encryptor 
	expect password: { send $password\r }
	sleep 1
	exit	
"
	

for encFiles in *.enc

	do
	
	 echo $encFiles

	done

for encryptor in $(find . -name 'encryptor')
	do
	 
	 echo $encryptor

	done


