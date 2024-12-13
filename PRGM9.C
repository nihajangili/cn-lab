#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int flag=1;
char i,j=0,temp[100];
clrscr();
printf("enter the sentenc e (add '$' at the end)::\n\n");
while((i=getchar())!='$')
{
if(i==' ')
i=';';
else if(i=='\t')
i=" ";
else if(i=='\n')
flag++;
temp[j++]=i;
}
temp[j]=NULL;
printf("\n\n\n altered sentence ::\n\n");
puts(temp);
printf("\n\n no.of lines=%d",flag);
getch();
}