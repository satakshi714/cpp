#include <stdio.h>

int main(){
	int max, a[5],i;
	max= a[0];
	printf("Enter array elements ");
	
	for (i = 0 ;i <= 4; i++){
		scanf("%d",&a[i]);
	}
	for (i = 0; i <= 4; i++){
		if(a[i]>max)
		max=a[i];
	}
	printf("Largest value is %d",max);
	return 0;
}
