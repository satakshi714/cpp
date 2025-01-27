# include <stdio.h>

int main() {
	
	char symbol;
	printf("Choose from *, @, #, . : ");
	scanf("%c",&symbol);
	
	switch (symbol){
		case '*' :
			printf("* * * * *");
			break;
		case '@' :
			printf("@ @ @ @ @");
			break;
		case '#' :
			printf("# # # # #");
			break;
		case '.' :
			printf(". . . . .");
			break;
		default :
			printf("Invalid Choice");
	}
	return 0;
}
