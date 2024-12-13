#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,temp,a[20];
clrscr();
printf("\n enter the no.of elements:");
scanf("%d",&n);
printf("\n enter the values:");
for(i=0;i<n;i++);
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=o;j<n;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nsorted values are:");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
getch();
}