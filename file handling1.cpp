#include <stdio.h>
int main() {
	int rn;
	char nam*fp;
	fp = fopen("stu.txt","w");
	printf("enter rollno and name\n");
	scanf("%d%s",&rn, name);
	fprintf(fp,"%d %s",rn, name);
	fclose(fp);
	fp = fopen("stu.txt","r");
	while(!feof(fp)){
		fscanf(fp,"%d %s",&rn,name);
		printf("%d %s\n",rn,name);
	}
	fclose(fp);
}
