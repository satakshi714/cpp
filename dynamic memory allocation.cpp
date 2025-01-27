#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int *p;
}p = (int*)malloc(1*sizeof(int));
//p = (int*)calloc(1,4);
if(p != NULL){
	printf("Enter an integer");
	printf("%d",*p);
	scanf("Value is %d",*p)
}
else{
	printf("Memory not available");
	}free(p);
	return 0;
	
}
