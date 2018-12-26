#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	clrscr();
	fp=fopen("123.txt","w");
	fputs("this is an apple",fp);

	fseek(fp,9,SEEK_SET);       //move cursor 9th place ie 'n'
	printf("\n%d",ftell(fp));   //says cursor position

//	fseek(fp,SEEK_CUR,SEEK_END);
//	fseek(fp,SEEK_CUR,0); or rewind(fp);
//	printf("%d",ftell(fp));

	fputs(" sam",fp);  //overwirte 9th place ex: this is a sample
	printf("\n%d",ftell(fp));
	rewind(fp);       // zero position
	printf("\n%d",ftell(fp));
	fclose(fp);
	getch();
}
