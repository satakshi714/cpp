# include <stdio.h>
void function (void);
int x = 21;
int main(){
	function();
	x=10;printf("In main x = %d",x);
	function();
}
void function(){
	printf("\n In functionx = %d\n",x);
}
