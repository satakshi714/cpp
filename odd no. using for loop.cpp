# include <stdio.h>

int main () {
	
	int n;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	for (int i = 1; n % 2 == 0; i++ ){
		printf("%d\n",i);
	}
	return 0;
}

