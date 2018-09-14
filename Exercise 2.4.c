#include <stdio.h>
int main(void) {
	int value1, value2, difference;
	
	value1 = 15;
	value2 = 87;
	difference = value2 - value1;
	
	printf("When you subtract %i from %i, you get %i.\n", value1, value2, difference);
	
	return 0;
}