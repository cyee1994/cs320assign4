#include <stdio.h>


void decrypt(char *p, int n)
{	
	FILE *ft;
	int cipherOffset = n;
	int i = 0;
	char temp[999];
	char *fname;
	fname = p;
	
	ft = fopen(fname, "r");
	fgets(temp, 999, (FILE*)ft);
	
	printf("%s\n",temp);
	printf("Offset is: %d\n",cipherOffset); 
	
	while (temp[i] != '\0')
	{
	 if (temp[i] >= 'a' && temp[i] <= 'z')
	 {
	  temp[i] = (temp[i] + cipherOffset);
	 }	
	 
	 else (temp[i] >= 'A' && temp[i] <= 'Z');
	 {
	  temp[i] = (temp[i] + cipherOffset);
	 }	
	}
	
	printf("%s\n",temp);
	
}

int main(int argc, char** argv)
{	
	printf("Assignment 4-3, Christopher Yee, christopheryee@att.net\n");	

	char filename[256];
	scanf("%[^\n]",filename);

	printf("Filename is: %s\n",filename);

	int offset = atoi(argv[1]);
	
	decrypt(filename, offset);
				
}
