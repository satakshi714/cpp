//wtp to display array in reverse order
#include <stdio.h>
int main() {
	int a[5],i;
	printf("Enter array elements \n");
	for (i = 0; i < 5; i++){
		scanf("%d",&a[i]);
	}
	printf("Array is: ");
	for( i = 4; i >= 0; i--){
		printf("\n %d",a[i]);
	}
	
	return 0;
}
