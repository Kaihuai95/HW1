#include <stdio.h>

int main()
{
    printf("Enter two integers and I'll tell you whether the first number is a multiple of the second number\n");
    int a, b;
    scanf("%d %d", &a, &b);
    if(a%b == 0){
        printf("The first number is a multiple of the second number");
    }else{
        printf("The first number is not a multiple of the second number");
    }
}