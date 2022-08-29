#include <stdio.h>

int main(void){
	
	int arr_asc[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int arr_desc[] = {8, 7, 6, 5, 4, 3, 2, 1};
	int arr[8];
	int i, asc=0, desc=0;
	
	for(i = 0; i < 8; i++)
		scanf("%d", &arr[i]);
	
	for(i = 0; i < 8; i++){
		if(arr[i] == arr_asc[i])
			asc++;
		else if(arr[i] == arr_desc[i])
			desc++;
	}
	
	if(asc == 8)
		printf("ascending");
	else if(desc == 8)
		printf("descending");
	else
		printf("mixed");
			
	return 0;
}
