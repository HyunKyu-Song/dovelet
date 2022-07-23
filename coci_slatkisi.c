#include <stdio.h>
#include <math.h>

int main(void){
	
	int c, k;
	int high, low;
	
	scanf("%d %d", &c, &k);
	
	high = (c + (pow(10, k) - pow(10, k-1))) / pow(10, k);
	high *= (double)pow(10, k);
	
	low = c / pow(10, k);
	low *= pow(10, k);
	
	if(fabs(high-c) > fabs(low-c))
		printf("%d", low);
	else
		printf("%d", high);
	
	return 0;
}
