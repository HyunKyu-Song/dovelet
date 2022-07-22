#include <stdio.h>

int main(void){
	
	int n, m, p, c;
	int pay, real_money, money, result;
	
	scanf("%d %d %d %d", &n, &m, &p, &c);
	
	pay = m + c;
	real_money = pay - p;
	money = real_money - c;
	result = n - money;
	
	printf("%d", result);
	//result = n-m+p
	
	return 0;
}
