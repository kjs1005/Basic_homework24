#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{ 
	FILE *fptr;
	char word;
	int count=0;
	fptr=fopen("C:\\couse.txt","r");
	if(fptr!=NULL)
	{
		while((word=getc(fptr))!=EOF)
		{
			printf("%c",word);
			count++;
		}
		fclose(fptr);
	}
	else
		printf("ÀÉ®×¶}±Ò¥¢±Ñ!!\n");
		printf("\n");
system("pause"); 
return 0; 
} 



