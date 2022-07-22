#include <stdio.h>

int main(void){
	
	int x, y, i, r;
	int arr[3];
	
	scanf("%d%d", &x, &y);
	
	arr[3] = x*y;
	
	while(y != 0){
		r = y % 10;
		y /= 10;
		arr[i] = r;
		i++;
	}
	
	printf("%d\n", x*arr[0]);
	printf("%d\n", x*arr[1]);
	printf("%d\n", x*arr[2]);
	printf("%d", arr[3]);
	
	return 0;
}
