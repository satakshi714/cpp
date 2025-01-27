#include <stdio.h>
int main(){
	FILE *p;
	p = fopen("newl1.txt","w");
	if(p == NULL){
		printf("file doesn't exist");
	}
	printf("File created");
	fclose(p);
	return 0;
}
