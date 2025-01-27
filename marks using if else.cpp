# include <stdio.h>

int main() {
	
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	
	if((100>=marks) && (marks>=90)){
		printf("Grade A");
	}else if((90>marks) && (marks>=80)){
		printf("Grade B");
	}else if((80>marks) && (marks>=70)){
		printf("Grade C");
	}else if((70>marks) && (marks>=60)){
		printf("Grade D");
	}else{
		printf("Grade is F");
	}
	
	return 0;
}
