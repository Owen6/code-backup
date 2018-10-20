//length

#include <stdio.h>
#include <ctype.h>

int main(void){
	char ch;
	int count = 0;

	printf("Enter a message: ");
	while(getchar() != '\n'){
		count++;
	}

	printf("Your message was %d characters long.\n", count);
}