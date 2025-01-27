#include <stdio.h>
int main(){
	
	int a[3][3],i ,j, sum;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Array elements are: ");
	for ( i = 0; i < 3; i++){
		printf("\n");
		for ( j = 0; j < 3; j++){
			printf("\t%d",a[i][j]);
		}
	}
	for(i = 0; i < 3; i++){
		for(j = 0;j < 3; j++){
			sum = sum + a[i][j];
		}
		
	}
	printf("\nSum is %d",sum);
	return 0;
}
