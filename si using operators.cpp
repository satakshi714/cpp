# include <stdio.h>

int main() {
	
	float a, b, c;
	printf("Enter principal amount: ");
	scanf("%f",&a);
	printf("Enter time period: ");
	scanf("%f",&b);
	printf("Enter rate: ");
	scanf("%f",&c);
	
	printf("Simple Intrest is : %f",(a*b*c)/100);
	
	return 0;
}

