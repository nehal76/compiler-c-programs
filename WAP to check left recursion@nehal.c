#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char ch[20];
clrscr();
printf("Enter the production: ");
gets(ch);
if(ch[0]==ch[3])
{
putch(ch[0]);
printf("->");
putch(ch[strlen(ch)-1]);
printf("A'\nA'->");
printf("%c",ch[41]);
printf("A'|null");
}
else
puts("No left recursion");
getch();
}
