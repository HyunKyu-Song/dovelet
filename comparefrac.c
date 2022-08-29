#include <stdio.h>

int main(void){
	
	int a, b, c, d;
	
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	if((float)a/b > (float)c/d)
		printf("1");
	else if((float)a/b == (float)c/d)
		printf("0");
	else
		printf("-1");
	
	return 0;
}
