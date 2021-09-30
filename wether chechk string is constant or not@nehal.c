#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main() {
 char s[100];
 int i, flag=0, n=0;

printf("Nehal Ahmed-2001330109015\nEnter the string:\n");
scanf("%s", &s);
 for(i=0;s[i]!='\0';i++){
if(isdigit(s[i])==0)
 flag++;
 }
 if(flag==0)
 printf("Given String is constant, contains only numbers!");
 else
 printf("Given string isn't constant");
 getch();
}
