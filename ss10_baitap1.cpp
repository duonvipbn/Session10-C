#include <stdio.h>
int main(){
	int array[5]={1,2,3,4,5};
	int n;
	printf("nhap mot phan tu bat ky: ");
	scanf("%d", &n);
	for(int i = 0; i < 5; i++){
	if(n==array[i]){
		printf("%d ton tai trong array la array[%d]", n, i);
		break;
	}	
	}
	return 0;
}
