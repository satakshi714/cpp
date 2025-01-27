#include <stdio.h>
int main(){
	
	int key,i,loc = 0,a[8];
	
	printf("Enter Array Elements: ");
	for (i = 0 ;i < 8; i++){
		scanf("%d",&a[i]);
	}
	printf("Enter a key value ");
	scanf("%d",&key);
	
	for (i = 0; i < 8; i++){
		if (key == a[i]){
			loc = i+1;
			break;
		}
	}
 	if (loc != 0){
		printf("FOUND at %d",loc);
	}else{
		printf("NOT FOUND ");
	}
	
	return 0;
}


