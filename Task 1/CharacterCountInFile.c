//C Program to count no. of times a specific character is found in a file .
#include <stdio.h> 

int main() 
{ 
    int CharCount=0;
    FILE *fpoint;
    fpoint=fopen("test.txt","r");//mode: Read
    if(fpoint == NULL) // file not exist
    {
    	printf("File test.txt  Not Found!");
    	return 0;
	}
	char c;
	while((c=fgetc(fpoint))!= EOF)
	{
		if(c =='$')
		{
			CharCount++;
		}
		
	}
	printf("Total of %d '$' Found in File",CharCount);
	return 0; 
} 
