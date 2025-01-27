#include <stdio.h>
struct account{     //inner structure
	int acc_no;
	float balance;
	};
struct customer{    //outer structure
	char name[10];
	char add[10];
	struct account ac;
	};
int main(){
	struct customer cust;
printf("Enter customer name: ");
scanf("%s",cust.name);
printf("Enter customer address: ");
scanf("%s",cust.add);
printf("Enter account number: ");
scanf("%d",&cust.ac.acc_no);
printf("Enter balance: ");
scanf("%f",&cust.ac.balance);
printf("Customer name : %s\nAddress : %s\n",cust.name, cust.add);
printf("Account number : %d\nBalance : %f\n",cust.ac.acc_no, cust.ac.balance);
	return 0;
}

