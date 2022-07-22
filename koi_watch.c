#include <stdio.h>

int main(void){
	
	int d, h, m, s, sec;
	int hour, minute, second;
	int koi_h, koi_m, koi_s;
	
	scanf("%d %d %d %d", &h, &m, &s, &sec);
	
	if(sec >= 86400){
		d = sec / 86400;
		sec -= (d*86400);
	}
	if(sec >= 3600){
		hour = sec / 3600;
		sec -= (hour*3600);
	}
	if(sec >= 60){
		minute = sec / 60;
		sec -= (minute*60);
		second = sec;
	}
	else{
		second += sec;
	}
	
	hour += h;
	minute += m;
	second += s;
	
	if(second >= 60){
		koi_s = second % 60;
		second /= 60;
		minute += second;
	}
	else{
		koi_s = second;
	}
	
	if(minute >= 60){
		koi_m = minute % 60;
		minute /= 60;
		hour += minute;
	}
	else{
		koi_m = minute;
	}
	
	if(hour >= 24){
		koi_h = hour % 24;
	}
	else{
		koi_h = hour;
	}
	
	printf("%d %d %d", koi_h, koi_m, koi_s);
	
	return 0;
}
