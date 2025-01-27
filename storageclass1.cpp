#include <stdio.h>

int main() {
	int i = 10;
	printf("%\n %d",i);
	{
		i = 20;
		printf("%\n %d",i);
	}
	printf("%\n %d",i);
	return 0;
}
