# include <stdio.h>

void swap(int ,int);

int main () {
	int a,b;
	printf("Enter two numbers: ")	;
	scanf("%d %d, &a,&b");
	swap(a,b);
	printf ("In main values are %d %d",a,b);
	
	return 0;
}

void swap (int x, int y){
	int z;
	z = y;
	y = x;
	x = z;
	printf("In function values are %d %d\n",x,y);
}
