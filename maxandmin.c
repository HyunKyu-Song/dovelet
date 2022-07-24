#include <stdio.h>

int main(void){
	
	int x, y;
	int min;
	
	scanf("%d %d", &x, &y);
	
	if(x >= y){
		min = y;
	}
	else{
		min = x;
	}
	
	if(min >= x){
		printf("%d", min);
	}
	else{
		printf("%d", x);
	}
	
	return 0;
}
