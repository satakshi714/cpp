#include <stdio.h>
int main() {
	int a = 12;
	float b = 1.2222;
	char c = 'a';
	void *ptr;
	ptr = &ptr;
	ptr = &a;
	printf("Integer no = %d \n", *(int*)ptr);
	ptr = &b;
	printf("Float no = %f \n", *(float*)ptr);
	ptr = &c;
	printf("Character no = %c \n", *(char*)ptr);
	return 0;
	
}


