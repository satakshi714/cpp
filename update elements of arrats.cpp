//wap to update all elements of an array

#include <stdio.h>

int main(){
	int i,a[]={2,4,6,8,10,21} ;
	
	for ( i = 0; i <= 5; i++){
		a[i]=a[i]+2;
	}
	
	printf("\nUpdated array is %d");
	for ( i = 0; i <= 5; i++)
	printf("\n%d",a[i]);
	return 0;
}
