#include <stdio.h>

int main(void){
	
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);
	
	a = (a - 2) * 4;
	b = (b - 2) * 4;
	c = (c - 2) * 4;
	
	printf("%d", a+b+c);
	
	return 0;
}
