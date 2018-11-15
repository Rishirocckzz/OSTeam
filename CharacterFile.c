//C program that read all characters from a file, outputting only the letter 'b's it finds in the file
#include<stdio.h>
int main()
{						//1
char a,b;
printf("Enter the character to print from file :");
scanf("%c",&a);
FILE *fpoint=fopen("test.txt","r");
if (fpoint == NULL)
{
  printf("File not found!! Create file \"test.txt\" with some text in it :)");
 return 0;
} 
while ((b = fgetc(fpoint)) != EOF)

{		
     //printf("%c ",b);				//2
  //character from file is read in b
  if(b==a)
{
 //since character found print it
printf("%c ",b);
}

}						//2
return 0;
}						//1
