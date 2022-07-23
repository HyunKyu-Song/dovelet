#include <stdio.h>

int main(void){
	
	int c, p, r;
	int need_fuse;
	
	scanf("%d%d%d", &c, &p, &r);
	
	need_fuse = (c*2.5 + p*2.0 + r*0.5) * 2;
	
	while(need_fuse % 10 != 0){
		need_fuse += 1;
	}
	
	printf("%d amperes", need_fuse);
	
	return 0;
}

//#include <stdio.h>
// 
//int main(void)
//{
//    int computer, printer, router;
//    int fuse;
//     
//    scanf("%d %d %d", &computer, &printer, &router);
//     
//    fuse = ((computer * (1.5 + 1.0))+ (printer * 2.0) + (router * 0.5)) * 2;
//     
//    printf("%.d amperes", (fuse + 9) / 10 * 10);
//     
//    return 0;
//}
