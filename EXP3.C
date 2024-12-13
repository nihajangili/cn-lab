#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,k,l=0,n;
char a[55],b[30];
clrscr();
printf("\n enter the string \n");
gets(a);
n=strlen(a);
printf("the length of the string is %d \n",n);
for(i=0;i<n;i++)
{
if(a[i]=='/'&&a[i+1]=='*')
{
k=i;
for(i=k;i<n;i++)
{
if(a[i]=='*'&&a[i+1]=='/')
{
j=i;
}
}
}
}
printf("\n\t the comments are started at %d & ended at %d",k,j);
for(i=k+2;i<j;i++)
{
b[1]=a[i];
l++;
}
printf("\n the contents in the comments are \n");
for(l=0;l<j;l++)
{
printf("%c",b[l]);
}
j=j+2;
for(i=k;i<n;i++)
{
a[i]=a[j];
j++;
printf("\n the string after removing all comments:");
puts(a);
getch();
}