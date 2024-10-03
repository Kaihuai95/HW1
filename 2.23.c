#include <stdio.h>

int main()
{
    printf("Enter three integers and I'll tell you the largest and the smallest\n");
    int a, b, c, max, min;
    scanf("%d %d %d", &a, &b, &c);
    if (b > a && b > c)
    {
        max = b;
        if (a > c)
            min = c;
        else if (c > a)
            min = a;
    }
    else if (a > b && a > c)
    {
        max = a;
        if (b > c)
            min = c;
        else if (c > b)
            min = b;
    }
    else if (c > b && c > a)
    {
        max = c;
        if (b > a)
            min = a;
        else if (a > b)
            min = b;
    }
    printf("the largest: %d\n", max);
    printf("the smallest: %d\n", min);
    return 0;
}