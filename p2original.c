	/*Write a program to find largest of 3 numbers using 4 functions using Pass by value*/
#include <stdio.h>
int main()
{
  int a,b,c,big;
  printf("enter the value of a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
    big =a;
}
else if (b>a && b>c)
{
  big =b;
}
else if (c>a && c>b)
{
big= c;
}
printf("the biggest number = %d",big);
}
return 0;
printf("enter your name %d", true>)