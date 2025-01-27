# include <stdio.h>

int main() {
	
	int ch;
	printf("Press 1 for ONE\nPress 2 for TWO\nPress 3 for THREE\n");
	printf("Enter your choice : ");
	scanf("%d",&ch);
	
	switch (ch) {
		case 1 :
			printf("ONE");
			break;
		case 2 :
			printf("TWO");
			break;
		case 3 :
			printf("Three");
			break;
		default:
			printf("Invalid Choice");
	}
	
	return 0;
}

//case lable must be unique
//case lable must end with a colon
//case lable must have a constant expression
//case lable must be of integer or character typre like case 2 : or case 1+1 : or case 'a' :
//case lable should not be floating point
//default can be placed anywhere in switch
//multiple cases cannot use same expression
//nesting of switch is allowed
//variables are not allowed in switch case lables

