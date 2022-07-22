#include <stdio.h>

int main(void){
	
	int input, empty, beverage;
	
	scanf("%d", &input);
	
	beverage = input / 4;
	empty = input % 4;
	
	input += beverage;
	input += (beverage / 4);
	empty += (beverage % 4);
	
	printf("%d %d", input, empty);
	
	return 0;
}
