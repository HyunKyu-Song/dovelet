#include <stdio.h>

int main(void){
	
	int x, y, temp;
	
	scanf("%d %d", &x, &y);
	
	temp = x;
	x = y;
	y = temp;
	
	printf("%d %d", x, y);
	
	return 0;
}
