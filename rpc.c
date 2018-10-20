#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	int i,comp,me,rpc;
	int myLife=3,compLife=3;
	srand(time(NULL));
	while(myLife>0 && compLife>0){
		//returns value 0-11
		int r = rand()%12;
		if(r<=3){
			comp = 1;
		}else if(r>3 && r<=7){
			comp = 2;
		}else{
			comp = 3;
		}

		printf("Life: %d\t Computer Life: %d\n",myLife,compLife);
		printf("Rock[1],\tPaper[2],\tScissors[3]\nEnter a number: ");
		scanf("%d",&rpc);
		printf("-----------------------------------------------------\n");
		switch(comp){
			case(1):
				printf("Rock\n");
				if(rpc==2){
					printf("Win!\n");
					compLife--;
				}else if(rpc==3){
					myLife--;
					printf("Loss!\n");
				}else{
					printf("Tie\n");
				}
			break;
			case(2):
				printf("Paper\n");
				if(rpc==3){
					printf("Win!\n");
					compLife--;
				}else if(rpc==1){
					myLife--;
					printf("Loss!\n");
				}else{
					printf("Tie\n");
				}
			break;
			case(3):
				printf("Scissors\n");
				if(rpc==1){
					printf("Win!\n");
					compLife--;
				}else if(rpc==2){
					myLife--;
					printf("Loss!\n");
				}else{
					printf("Tie\n");
				}
			break;
		}
		printf("\n");
	}
	return 0;	
}