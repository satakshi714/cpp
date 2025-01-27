# include <stdio.h>

int main() {
	
	int n, r, sum = 0;
	printf("Enter a number :");
	scanf("%d",&n);
	int num = n;
	
	while( n>0 ){
		r = n % 10;
		sum = sum + (r*r*r);
		n = n / 10;
		}
	
	if (sum == num){
		printf("Armstrong");
	}else{
		printf("Not Armstrong");
	}
	return 0;
}
