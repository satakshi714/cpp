# include <stdio.h>

int main(){
	
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Unary plus : %d\n",+a);
	printf("Unary minus : %d\n",-a);
	
	printf("pre-increment operator : %d\n",a++);
	printf("post-increment operator : %d\n",++a);
	
	printf("pre-decrement operator : %d\n",a--);
	printf("post-decrement operator : %d\n",--a);
	return 0;
}

// ++ count increment count by 1 and then uses its value as the value of the expression. This is known as prefix operator.
// count ++ uses count as the value of the expression and thrn increments count by 1. This is known as postfix operator.

