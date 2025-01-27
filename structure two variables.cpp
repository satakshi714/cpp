#include<stdio.h>
struct book{
	int id; 
	float price;
	int no_of_pages;	
};
int main(){
	struct book b1, b2;
	printf("Enter book details: \n");
	printf("Ente id: \n");
	scanf("%d",&b1.id);
	printf("\nEnter book price: ");
	scanf("%f",&b1.price);
	printf("\nEnter no of pages: ");
	scanf("%d",&b1.no_of_pages);
	
	b2 = b1;
	printf("\nDetails of the first book is: ");
	printf("\nId = %d",b1.id);
	printf("\nPrice is = %f",b1.price);
	printf("\nNo of pages is = %d",b1.no_of_pages);
	
	printf("\nDetails of the second book is: ");
	printf("\nId = %d",b2.id);
	printf("\nPrice is = %f",b2.price);
	printf("\nNo of pages is = %d",b2.no_of_pages);
	return 0;
}
