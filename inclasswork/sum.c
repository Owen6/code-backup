//overflow example

#include <stdio.h>

int main(void){
	int n;
	int sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");

	do{
		scanf("%hd", &n);
		sum += n;
	}while(n!=0);

	printf("The sum is: %hd\n", sum);
	return 0;
}