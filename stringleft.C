#include<stdio.h>
#include<conio.h>
main()
{
 char st[10];
 int a;
 clrscr();
 printf("Enter the string:");
 gets(st);
 printf("Enter the lenght:");
 scanf("%d",&a);
 st[a]='\0';
 printf("Result:%s",st);
 getch();
}