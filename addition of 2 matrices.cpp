#include<stdio.h>
int main (){
	int a[2][2], b[2][2], c[2][2] ,i, j , sum;
	
	printf("Enter first array elements :");
	for(i = 0; i< 2; i++){
		for(j = 0; j < 2; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("First array is: ");
	for ( i = 0; i < 2; i++){
		printf("\n");
		for ( j = 0; j < 2; j++){
			printf("\t%d",a[i][j]);
		}
	}
	printf("\nEnter second array elements :");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Second array is: ");
	for ( i = 0; i < 2; i++){
		printf("\n");
		for ( j = 0; j < 2; j++){
			printf("\t%d",b[i][j]);
		}
	}
	for (i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nResultant Matrix: ");
	for( i = 0; i < 2; i++){
		printf("\n");
		for (j = 0; j < 2; j++){
			printf("\t%d", c[i][j]);
		}
	}
	return 0;
}
