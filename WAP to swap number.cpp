//WAP to swap number
#include<stdio.h>
#include<conio.h>
main()
{
    int x = 10, y = 15, temp;
    printf("Before Swap x = 10 and y = 15\n");
    temp = x;
    x = y;
    y = temp;
    printf("After Swap x = %d and y = %d", x, y);
    getch();
}
