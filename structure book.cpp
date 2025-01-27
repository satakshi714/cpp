#include<stdio.h>
struct book{
	int id; 
	float price;
	int no_of_pages;	
};
int main(){
	struct book b;
	printf("Enter book details: \n");
	printf("Ente id: \n");
	scanf("%d",&b.id);
	printf("\nEnter book price: ");
	scanf("%d",&b.price);
	printf("\nEnter no of pages: ");
	scanf("%d",&b.no_of_pages);
	
	printf("\nDetails of the book is: ");
	printf("\nId = %d",b.id);
	printf("\nPrice is = %f",b.price);
	printf("\nNo of pages is = %d",b.no_of_pages);
	return 0;
}
