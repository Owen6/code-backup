// Calculating number of digits

#include <stdio.h>

int main(void){
	int n;
	printf("Enter a non-negative integer: ");
	scanf("%d",&n);

	int count = 0;
	do{
		n = n/10;
		count++;
	}while(n>0);

	printf("%d digits\n", count);
	return 0;
}	