#include<stdio.h>
#include<conio.h>

void main()
{  
  printf("enter your number x:");
  scanf("%d",&x);
  
  printf("enter your number y:");
  scanf("%d",&y);
  
    int x , y, temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d", x, y);
    getch();
}
