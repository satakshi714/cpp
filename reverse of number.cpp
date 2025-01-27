# include <stdio.h>

int main() {
	 
	 int n, i, rev;
	 printf("Enter a number : ");
	 scanf("%d",&n);
	 
	 while(n > 0){
	 	i = n % 10;
	 	rev = rev*10 + i;
	 	n = n /10;
	 }
	 printf("Reverse is :%d",rev);
	return 0;
}
