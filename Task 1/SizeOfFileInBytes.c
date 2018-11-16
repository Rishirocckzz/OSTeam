//C Program that prints the size of given file in Bytes..

#include <stdio.h> 

int main() 
{ 
    char FileName[100];
    printf("Enter the file name : ");
    scanf("%s",FileName);
	FILE* fpoint = fopen(FileName, "r"); 

	// checking if the file exist or not 
	if (fpoint == NULL) { 
		printf("\nFile \"%s\" Not Found!\n",FileName); 
		return -1; 
	} 

	fseek(fpoint, 0L, SEEK_END); //SEEK_END : It moves file pointer position to the end of file.

	// calculating the size of the file 
	long int size = ftell(fpoint); //ftell() function gives current position of file pointer.

	// closing the file 
	fclose(fpoint); 

	if (size != -1) 
		printf("\nSize of the file is %ld bytes \n", size); 
	return 0; 
} 
