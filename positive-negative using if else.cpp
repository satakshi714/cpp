# include <stdio.h>

int main() {
	
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if (n>0){
		printf("Number is positive");
	}else if(n==0){
		printf("Neither positive nor negative");
	}else{
		printf("Number is negative");
	}
	return 0 ;
}
