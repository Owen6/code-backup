// Balancing a checkbook

#include <stdio.h>

int main(){
	int cmd = 0;
	float balance;
	float value;

	printf("*** ACME checkbook-balancing program ***\n");
	printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

	while(cmd!=4){
		printf("Enter command: ");
		scanf("%d", &cmd);

		switch(cmd){
			case 0: balance = 0.0f;	break;
			case 1: 
					printf("Enter amount of credit: ");
					scanf("%f", &value);
					balance += value;
					break;
			case 2:
					printf("Enter amount of debit: ");
					scanf("%f", &value);
					balance -= value;
					break;
			case 3:
					printf("Current balance $%.2f\n", balance);
					break;
		}
	}

	return 0;
}