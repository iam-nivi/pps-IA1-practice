/*Write a program to Compare two strings*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input()
{
  char str1[20];
  char str2[20];
  printf("enter thr first string:\n");
  scanf("%s",str2);
}
int computer(char str1[20],char str2[20])
{
  int value;
  value=strcmp(str1,str2);
  return value;
}
void output (char str1[20],char str2[20],int value)
{
  if (value==0)
  {
    printf("strings are same\n");
  }
  else if(value>0)
  {
    printf("%s is greaterthan %s\n",str1,str2);
  }
}
int main()
{
  char str1[20],str2[20];
  int value;
  input();
  value=computer(str1,str2);
  output(str1,str2,value);
  return 0;
}
