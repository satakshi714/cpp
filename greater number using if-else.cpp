# include <stdio.h>

int main() {
	
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	if (a>b){
		printf("\n a is greater than b");
	}
	else{
		printf("\n b is greater than a");
	}
	return 0;
}

