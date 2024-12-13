#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int flag=1;
char i,j=0,temp[100];
clrscr();
printf("Enter the sentence(add'$'at the end)::\n\n");
while((i=getchar())!='$')
{
if(i==' ')
i='i';
else if(i=='\t')
i='i';
else if(i=='\t')
flag++;
temp[j++]=i;
}
temp[j]=NULL
printf("\n\n Altered sentence :: \n\n");
puts(temp);
printf("\n\n No.of lines=%d",flag);
getch();
}