#include <stdio.h>

int main(void){
	
	int change_h, change_f, change_t;
	int price, change;
	
	scanf("%d", &price);
	
	change = 1000 - price;
	
	change_h = change / 100;
	change_f = (change % 100) / 50;
	change_t = (change % 100 % 50) / 10;
	
	printf("%d %d %d", change_h, change_f, change_t);
	
	return 0;
}
