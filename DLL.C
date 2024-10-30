#include<stdio.h>
#include<conio.h>
void main()
{
char sender[50],receiver[50];
int i,winsize;
clrscr();
printf("\n Enter the windows size:");
scanf("%d",&winsize);
printf("\nSENDER WINDOW IS EXPANDED TO STORE MSG OR WINDOW");
printf("\nEnter the data to be sent:");
fflush(stdin);
gets(sender);
for(i=0;i<winsize;i++)
receiver[i]=sender[i];
receiver[i]=NULL;
printf("\nMSG SEND BY THE SENDER:\n");
puts(sender);
printf("\nWINDOW SIZE OF RECEIVER IS EXPANDED\n");
printf("\nACKNOWLEDGEMENT FROM RECEIVER\n");
for(i=0;i<winsize;i++)
printf("\n ACK:%d",i);
printf("\nMSG RECEIVED BY RECEIVER IS:");
puts(receiver);
printf("\nWINDOW SIZE OF RECEIVER IS SHRINKED\n");
getch();
}