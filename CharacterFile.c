//C program that read all characters from a file, outputting only the letter 'b's it finds in the file
int c;
FILE *fp=fopen("filename.txt","r");

if(fp==NULL)
{
   printf("Error opening file!");
   return -1;
}

while((c=fgetc(fp)!=EOF) 
{
  //character is read in c
  //do something
}
fclose(fp);
