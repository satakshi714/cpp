#include <stdio.h>
struct employee
{
	int id;
	char name[10];
	int age;
};
int main(){
	struct employee emp,*ptr;
	ptr = &emp;
	printf("Enter details of employee: id, name, age: ");
	scanf("%d%s%d",&ptr->id,(*ptr).name,&(*ptr).age);
	printf("Details of employee are: \n");
	printf("id = %d \nName = %s \nAge = %d",ptr->id,(*ptr).name,ptr->age);
	return 0;
}
