# include <stdio.h>

int fact();

int main(){
	printf("Factorial is %d",fact());
}

int fact(){
	int n, f = 1;
	printf("Enter a number : ");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++){
		f=f*i;
	}
	return f;
}


