#include<stdio.h>

int main(){
	
	int a[10];
	int pass, hold, i, n;
	printf("Enter total number of elements for the arrays");
	scanf("%d",&n);
	printf("Enter elements: ");
	for (i = 0; i < n; ++i){
		scanf("%d",&a[i]);
	}
	for (pass = 0; pass < n-1; pass++){
		for (i = 0; i < n-pass-1; i++){
			if(a[i] > a[i + 1]){
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold; 
			}
		}
	}
	printf("\nData itema in ascending order");
	for(i = 0; i < n; ++i){
		printf("\n%d", a[i]);
	}
	return 0;
}
