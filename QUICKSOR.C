#include<stdio.h>
#include<conio.h>
void quicksort(int n[25],int first,int last)
{
int i,j,pivot,temp;
if(first<last)
{
povit=first;
i=first;
j=last;
while(i<j)
{
while(n[j]>n[povit])
j--;
if(i<j)
temp=n[i];
n[i]=n[j];
n[j]=temp;
}
}
temp=n[povit];
n[povit]=n;
n[j]=temp;
quicksort(n,first,j-1);
quicksort(n,j+1,last);
}
}
void main()
{
inti,count,n[25];
clrscr();
printf("how many elements are u going to enter?:");
scanf("%d",&count);
printf("enter %d elemetns:");
for(i=0;i<count;i++)
scanf("%d",&n[i]);
qucksort(n,o,count-1);
printf("order of sorted elements:");
for(i=0;i<count;i++)
printf("%d",n[i]);
getch();
}