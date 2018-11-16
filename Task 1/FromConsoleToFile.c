//C program that read strings from the console and save them in a file
#include<stdio.h>
int main()
{					
char a;
int f=0;
FILE *fpoint;
fpoint=fopen("test.txt","a+");// for files modes like "a+" visit: http://www.c4learn.com/c-programming/c-file-open-modes/ 
//since a+ is used no need of file not found case
while(scanf("%c",&a))
{

//runs until no character left.

fputc(a,fpoint);
if(a==10){
scanf("%c",&a);
if(a==10)
break;
}
//appends a at EOF 
}
fclose(fpoint);
return 0;
}						
