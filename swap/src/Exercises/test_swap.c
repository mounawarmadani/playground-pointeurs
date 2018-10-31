#include <stdio.h>
#include <stdlib.h>
#include "swap.h"

int main() {
	int a,b;
	
	a=5;
	b=6;
	echange(&a,&b);
	if (a==6 && b==5) {
		printf("TECHIO> success true\n");
	}
	else {
		printf("TECHIO> success false\n");
	}
	
	return 0;
}