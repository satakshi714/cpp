//wap to find sum of all elemts of an array

#include <stdio.h>

int main(){
	int a[10],sum = 0, i;
	printf("Enter array elements \n");
	for ( i = 0; i <= 9; i++){
		scanf("%d",&a[i]);
	}
	for ( i = 0; i<= 9; i++){
		sum = sum + a[i];
	}
	printf("\nSum is %d",sum);
	return 0;
}
