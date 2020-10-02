//WAP to swap number
#include<stdio.h>
#include<conio.h>
main()
{
    int x = 10, y = 15;
    printf("Before Swap x = 10 and y = 15\n");
    x=x*y;
    y=x/y;
    x =x/y;
    printf("After Swap x = %d and y = %d", x, y);
    getch();
}
