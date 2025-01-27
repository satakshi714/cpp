# include <stdio.h>

int main(){
	
	int n, i, rev;
	printf("Enter a number : ");
	scanf("%d",&n);
	int num = n;
	
	while (n > 0){
		i = n % 10;
		rev = rev * 10 + i;
		n = n /10;
	}
	
	if (rev == num){
		printf("Palindrome");
	}else{
		printf("Not a palindrome number");
	}
	return 0;
}
