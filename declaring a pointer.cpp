#include <stdio.h>
int main() {
	int i = 5, *ptr;
	ptr = &i;
	printf("%u",ptr);
	printf("\n%d",&i);
	printf("\n%d",*ptr);
	printf("\n%d",i);
	printf("\n%d",&ptr);
	
}

