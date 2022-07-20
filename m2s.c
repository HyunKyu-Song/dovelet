#include <stdio.h>

int main(void){
	
	int min, sec;
	
	scanf("%d", &min);
	
	sec = min * 60;
	
	printf("%d minutes is %d seconds.", min, sec);
	
	return 0;
}
