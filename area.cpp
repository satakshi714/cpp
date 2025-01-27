# include <stdio.h>

int main() {
	
	float r, l, b;
	float pi = 3.14;
	
	printf("Enter length of rectangle :");
	scanf("%f",&l);
	printf("Enter width of rectangle :");
	scanf("%f",&b);
	printf("Area of Rectangle : %f\n",l*b);
	
	printf("Enter radius of circle :");
	scanf("%f",&r);
	printf("Area of Circle: %f",3.14*r*r);
	
	return 0;
}
