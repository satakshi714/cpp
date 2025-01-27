#include <stdio.h>

int fact(int);

int main() {
	int n,f;
	printf("Enter a number: ");
	scanf("%d", &n);
	f=fact(n);
	printf("The factorial is %d",f);
	return 0;
}
int fact(int x){
	int f;
	if(x == 1 || x == 0){
		return 1;
	}else{
		f =(x * fact(x - 1));
		return (f);
	}
}
