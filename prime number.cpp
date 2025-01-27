# include <stdio.h>

int main() {
	
	int i, n, a = 0;
	printf("Enter a number :");
	scanf("%d",&n);
	
	for (i = 1; i <= n; i++){
		if(n % i == 0){ 
		a += 1;
		}
	}
	if (a == 2){
			printf("prime number");
	}else{
		printf("Not a primt number");
	}
	return 0;
}
