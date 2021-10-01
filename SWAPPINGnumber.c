#include<stdio.h>
#include<conio.h>

#define p printf(
#define s scanf(
#define f )
#define printf("\n") m

void main()
{  
  p "enter your number x:" f;
  s "%d",&x f;
  
  p "enter your number y:" f;
  s "%d",&y f;
  
    int x , y, temp;
    temp = x;
    x = y;
    y = temp;
    p "x = %d and y = %d", x, y f;
  m;
    getch();
}
