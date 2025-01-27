#include <stdio.h>
int main() {
	int a[5], *p,sum= 0;
	printf("Enter array elements");
	for (int i = 0; i < 5;i++){
		scanf("%d",&a[i]);
	}p= a;    //p=&a[0]
	for (int i = 0; i < 5; i++){
		sum + sum +*(p+i);
	}
	printf("\nSum of array elements are %d", sum);
	return 0
}
