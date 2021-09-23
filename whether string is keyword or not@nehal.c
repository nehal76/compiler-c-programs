#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  int i,n, flag = 0;
  char str[10];
  char key[7][10] = {"goto", "exit", "break", "if", "else", "contine", "return",};
  clrscr();
  printf("Nehal ahmed-2001330109015\n\nEnter a string ");
  gets(str);
  for(i=0; i<7; i++)
  {
  n = strcmp(str, key[i]);
  if(n==0)
  flag = 1;
  }
  if(flag == 0)
  printf("\nIt is not a keyword");
  else
  printf("\n It is a keyword");
  getch();
  return;
  }
