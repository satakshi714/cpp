#include <stdio.h>

void modify(int*);

int main (){
	int x;
	printf("Enter a value: ");
	scanf("%d",&x);
	modify(&x);
	printf("The value is %d:",&x);
	return 0;
}

void modify (int *y){
	*y=*y+1;
	printf("The value is %d\n",*y);
}
