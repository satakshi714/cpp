#include <stdio.h>
void display(int[]);
int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	display(a);
	return 0;
}
void display(int b[]){
	int i;
	printf("Array is : ");
	for( i = 0; i < 10; i++){
		printf("\n%d",b[i]);
	}
}
