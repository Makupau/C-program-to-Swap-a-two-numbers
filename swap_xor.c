#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter first number:");
 scanf("%d",&a);
 printf("Enter second number:");
 scanf("%d",&b);
 printf("\nBefore swapping:%d",a);
 printf("\nBefore swapping:%d",b);
 a=a^b;
 b=a^b;
 a=a^b;
 printf("\n\nAfter swapping:%d",a);
 printf("\nAfter swapping:%d",b);
 return 0;
 }
