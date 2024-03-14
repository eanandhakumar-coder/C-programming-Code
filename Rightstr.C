#include<stdio.h>
#include<conio.h>
main()
{
 char st[10];
 int i=0,a,j;
 clrscr();
 printf("Enter the string:");
 gets(st);
 while(st[i]!='\0')
 {
  i++;
 }
 printf("string lenght:%d",i);
 printf("\nEnter the lenght:");
 scanf("%d",&a);
 i-=a;
 for(j=i;st[j]!='\0';j++)
 {
  printf("%c",st[j]);
 }
 getch();
}