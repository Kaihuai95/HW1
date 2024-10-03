#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a, b, c;
	printf("Enter you're height(m):\n");
	scanf("%f", &a);
	printf("Enter you're weight(kg):\n");
	scanf("%f", &b);
    c = b/(a*a);
	printf("Your BMI is %.1f\n", c);

	if (c < 18.5) {
		printf("You're underweight.(less than 18.5)\n");
	}
	else if (c >= 18.5 && c <= 24.9) {
		printf("You're nomral.(between 18.5 and 24.9)\n");
	}
	else if (c >= 25.0 && c <= 29.9) {
		printf("You're overweight.(between 25 and 29.9)\n");
	}
	else {
		printf("You're obese.(30 or greater\n)");
	}
	return 0;
}