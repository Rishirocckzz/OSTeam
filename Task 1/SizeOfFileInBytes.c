//C Program that prints the size of given file in Bytes..

#include <stdio.h> 

int main() 
{ 

	FILE* fpoint = fopen("test.txt", "r"); //mode : Read

	// checking if the file exist or not 
	if (fpoint == NULL) { 
		printf("File \"test.txt\" Not Found!\n"); 
		return -1; 
	} 

	fseek(fpoint, 0L, SEEK_END); //SEEK_END : It moves file pointer position to the end of file.

	// calculating the size of the file 
	long int size = ftell(fpoint); //ftell() function gives current position of file pointer.

	// closing the file 
	fclose(fpoint); 

	if (size != -1) 
		printf("Size of the file is %ld bytes \n", size); 
	return 0; 
} 
