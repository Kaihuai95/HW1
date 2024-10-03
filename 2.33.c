#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Here are five questions about your daily driving.\nPlease enter them in order, and then I'll tell you how much it costs you to drive in a day.\n");
    float a, b, c, d, e, total;
    printf("1.)Total kilograms driven per day\n");
    scanf("%f", &a);
    printf("2.)Cost per liter of gasoline\n");
    scanf("%f", &b);
    printf("3.)Average kilograms per liter\n");
    scanf("%f", &c);
    printf("4.)Parking fees per day\n");
    scanf("%f", &d);
    printf("5.)Tolls per day\n");
    scanf("%f", &e);
    total = a/c*b+d+e;
    printf("It costs: %.1f", total);
    
}