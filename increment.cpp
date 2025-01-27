#include <stdio.h>
void increment(void);
void decrement(void);
int i = 0;
int main(){
	printf("\n%d",i);
	increment();
	increment();
	decrement();
	decrement();
}
void increment(){
	i=i+1;
	printf("On incrementing i=%d",i)
}
void decrement(){
	i=i-1;
	printf("On decrementing i=%d",i)
}
