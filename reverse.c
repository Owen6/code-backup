#include <stdio.h>

int main(void){
	int list[10];
	int i,j,a;
//	scanf("%d%d%d",&a,&b,&c);

	for(i=0;i<=10;i++){
		printf("Enter a number: ");
		scanf("%d",&a);
		list[i] = a;
	}
	for(j=0;j<=10;j++){
		printf("%d\n", list[10-j]);
	}


	return 0;
}