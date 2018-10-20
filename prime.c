//prime

#include <stdio.h>
#include <stdbool.h>

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	bool dividable = false;
	for(int i = 2; i<n; i++){
		if(n%i == 0){
			dividable = true;
		}
	}

	if(dividable){
		printf("%d is not a prime!\n", n);
	}else{
		printf("%d is a prime number!\n",n);
	}
	return 0;
}