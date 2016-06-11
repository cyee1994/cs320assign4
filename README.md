CS320 Assignment #4 README
 
This project consists of 3 different C programs and two bash programs working together to perform a Caeser Cipher decryption

prog4_1.sh uses a login file, target server and name from the command line to log into a server, using the login information of the name supplied and copy wanted files from that user's directory. This program is run using ./prog4_1.sh x y z with arguement x being the file containing login information, arguement y being the server and arguement z being the targets name.

prog4_2.c breaks the encryption of the Caeser Cipher by comparing some arbitrary text with it's result when put through the cipher. It is compiled with gcc prog4_2.c and run with ./a.out x with the x arguement being some arbitrary text.

prog4_2.sh is a script that automates the process of calling the encryptor and piping it into prog4_2.c. It is run with ./prog4_2.sh. 

prog4_3.c is a Caeser Cipher. It takes in an offset amount from the command line and a file from stdin. It then applies the offset to the contents read in from the file. It can be compiled with gcc prog4_3.c and run with ./a.out x. With x being the arbitrary offset amount.

prog4_3.sh is a script that calls prog4_3.c on each of the encrpyted files we want to decrypt. It then outputs a decrypted file for each of them. It can be run with prog4_3.sh x with x being an arbitrary offset number that is used by prog4_3.c.