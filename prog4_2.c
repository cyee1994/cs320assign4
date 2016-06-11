#include <stdio.h>	



char cipherLetter()
{
	
	char cipher[256];
	
 	scanf("%[^\n]",cipher);

	char cipherLetter = cipher[0];

	return cipherLetter;	
} 

int main(int argc, char** argv)
{
	printf("Assignment 4-2.c, Christopher Yee, christopheryee@att.net\n");

	char encodedLetter = cipherLetter();
	printf("Encoded Text: %s\n", &encodedLetter);
	
	char plainText = argv[1][0];
	printf("Plain Text: %s\n",&plainText);

	int distance = (plainText - encodedLetter);
	printf("%d\n", distance);
				
}
