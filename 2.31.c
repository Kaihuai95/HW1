#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("number\tsquare\tcube\n");
	for(int i=1; i<=10; i++){
	    int s = i*i;
	    int c = i*i*i;
	    printf("%d\t%d\t%d\n", i, s, c);
	}
}