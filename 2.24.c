#include <stdio.h>

int main()
{
    printf("Enter a integer and I'll tell you it's odd or even\n");
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("It's even");
    }
    else {
        printf("It's odd");
    }
    return 0;
}