
#include <stdio.h>

int main(void){
	int ray;
	printf("Enter a range: ");
	scanf("%d",&ray);
	for(int i=1;i<=ray;i++){
		if(i%2!=0){
			printf("%d\n",i);
		}
	}

	return 0;
}