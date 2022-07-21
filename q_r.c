#include <stdio.h>

int main(void){
	
	int x, y;
	int q, r;
	
	scanf("%d%d", &x, &y);
	
	q = x / y;
	r = x % y;
	
	printf("%d %d", q, r);
	
	return 0;
}
