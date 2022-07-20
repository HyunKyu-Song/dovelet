#include <stdio.h>

int main(void){
	
	int x, y;
	float res;
	
	scanf("%d%d", &x, &y);
	
	res = x * y / 2.0;
	
	printf("%.2f", res);
	
	return 0;
}
