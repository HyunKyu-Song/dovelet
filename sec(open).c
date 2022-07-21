#include <stdio.h>

int main(void){
	
	int sec;
	int d=0, h=0, m=0, s=0;
	
	scanf("%d", &sec);
	
	d = sec / (24*60*60);
	h = (sec % (24*60*60)) / (60*60);
	m = ((sec % (24*60*60)) % (60*60)) / 60;
	s = (((sec % (24*60*60)) % (60*60)) % 60);
	
	printf("%d %d %d %d", d, h, m, s);
	
	return 0;
}
