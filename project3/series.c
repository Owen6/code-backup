/**Project 3
This program will carry out an alternating sequence
**/
#include <stdio.h>

int main(void)
{
	int n,s=0,i;
	printf("Enter an integer number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			s = s-1*(i*i);
		}else{
			s = s+1*(i*i);
		}
	}
	printf("The value of the series is: %d\n",s);

	return 0;
}