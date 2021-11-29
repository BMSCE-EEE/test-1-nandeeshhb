#include<stdio.h>
int input();
int main()
{
  int num1,num2,sum;
  num1=input();
  num2=input();
  sum=num1+num2;
  printf("Sum of two numbers is:%d",sum);
  return 0;
}
int input()
{
int A;
printf("Enter a number:\n");
scanf("%d",&A);
return A;
}