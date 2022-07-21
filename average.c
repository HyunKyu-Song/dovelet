#include <stdio.h>

int main(void){
	
	int a, b, c, d;
	float avg;
	
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	avg = (a + b + c + d) / 4.0;
	
	printf("%.2f", avg);
	
	return 0;
}
