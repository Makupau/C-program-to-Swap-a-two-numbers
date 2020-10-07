#include<stdio.h>
#include<conio.h>

void main()
{  
  int x , y, temp=0;
  printf("enter your number x:");
  scanf("%d",&x);
  
  printf("enter your number y:");
  scanf("%d",&y);
  
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d", x, y);
    getch();
}
