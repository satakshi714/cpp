#include<stdio.h>
void fact(int);
main()
{
	int n;
	printf("enter your value");
	scanf("%d",&n);
	fact(n);
}
void fact(int n)
{
	int i;
	int sum=1;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
		
	}
	printf("factorial is %d",sum);
		
}
