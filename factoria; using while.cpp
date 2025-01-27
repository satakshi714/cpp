#include <stdio.h>

int main() {
	int i, n;
	int fact = 1;
	printf("Enter a number : ");
	scanf("%d",&n);
	 
	
	while(i <= n){
		fact *= i;
		i++;
	
	}
	printf("Factorial is: %d",fact);
	
	return 0;
}
