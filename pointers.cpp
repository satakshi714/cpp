#include <stdio.h>

int *p1, *p2,*p3,*p4;
int i = 10; 
int j = 2;
int a[5]={10,20,3,40,5};

int main() {
	int m,n,x,y,z;
	p1 = &i;
	p2 = &j;
	p3 = &a[1];
	p4 = &a[3];
	
	m = p4-p3;
	z = *p4-*p2;
	printf("\nPointer subtraction is %d",z);
	printf("\nThe vlaue of p1 is = %d",p1);
	printf("\nThe value of p2 is = %d",p2);
	printf("\nThe value of p3 is = %d",p3);
	
	x = *p3 + 2;
	p3 = p3+2;
	
	printf("\nthe value of integer add in pointer deref is = %d",x);
	printf("\nthe value of integer add in pointer is = %d",p3);
	printf("\nthe value of integer add in pointer is = %d",*p3);
	
	if (p1 >= p2)
	printf("\n%d\n%d\n%d",m,n,x);
	if (p1 <= p2)
	printf("\n%d\n%d\n%d",p1,p2,p3);
	
}
