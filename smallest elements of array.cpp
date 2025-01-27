#include <stdio.h>

int main(){
	int min, a[5],i;
	min= a[0];
	printf("Enter array elements ");
	
	for (i = 0 ;i <= 4; i++){
		scanf("%d",&a[i]);
	}
	for (i = 0; i <= 4; i++){
		if(a[i]<min)
		min=a[i];
	}
	printf("Largest value is %d",min);
	return 0;
}
