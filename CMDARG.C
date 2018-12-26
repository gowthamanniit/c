#include<stdio.h>
#include<conio.h>
/*
void main(int argc,char *argv[])  // argc = no. of arguments including filename.exe(0 index)
				  // argv = 0 index filename.exe, 1 index " " 2 index " "
				  // steps: save must, compile, run
				  // file -->dos shell --> filename.exe "argv 1" "argv 2" "argv 3"
{
clrscr();
printf("\n No. of arguments passed: %d",argc);
printf("\n argv 0 = %s",argv[0]);
printf("\n argv 1 = %s",argv[1]);
printf("\n argv 2 = %s",argv[2]);
getch();
}
*/

void main(int count,char *val[])
{
 int f=1,i,n;
 clrscr();

/* printf("\n count = %d ",count);
 printf("\n value1 = %d",atoi(val[1]));
 printf("\n value2 = %d",atoi(val[2]));
 printf("\n value3 = %d",atoi(val[3]));
 printf("\n total  = %d",atoi(val[1])+atoi(val[2])+atoi(val[3]));*/

 n=atoi(val[1]);

 for(i=1;i<=n;i++)
 {
  f=f*i;
 }
 printf("\n factorial value = %d",f);
 getch();
}


