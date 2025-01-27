# include <stdio.h>

int main() {
	
	int a, b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	printf("Addition of a+b is : %d\n",a+b);
	printf("Subtraction of a-b is : %d\n",a-b);
	printf("Multipliaction of a*b is: %d\n",a*b);
	printf("Division of a/b is : %f\n",(float)a/ b);
	printf("Mudulo of a%%b is : %d\n",a%b);
	
	return 0;
}
