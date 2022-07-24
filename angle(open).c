#include <stdio.h>

int main(void){
	
	int n, in, out;
	
	scanf("%d", &n);
	
	in = (n-2) * 180;
	out = (180 * n) - in;
	
	printf("%d %d", in, out);
	
	return 0;
}
