# include <stdio.h>

void mul();

int main() {
	mul();
	
	return 0;
}

void mul() {
	int a,b,c,d;
	printf("Enter numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	d=a*b*c;
	printf("Multiplication is %d",d);
	
}
