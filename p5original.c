/* Write a program to find the square root of a number.*/
#include<stdio.h>
#include<math.h>
float input()
{
  float a;
  printf("Enter a number");
  scanf("%f",&a);
  return a;
}
float my_sqrt(float n)
{
  if(n=0 || n== 1)
  {
    return n;
  }
  float i=1,ans=1;
  while(ans<=n){
    i++;
    ans=i-1;
  }
  return i-1;
}
void output(float n)
{
  printf("The square root of %f is %.2f",n,my_sqrt(n));
}
int main()
{
  float n;
  n=input();
  my_sqrt(n);
  output(n);
}