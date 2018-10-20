//Printing a date in Legal Form

#include <stdio.h>

int main(void){
	int m,d,y;
	printf("Enter date (mm/dd/yy): ");
	scanf("%d/%d/%d",&m,&d,&y);

	printf("Dated this %d", d);
	switch(d){
		case 1: case 21: case 31: printf("st"); break;
		case 2: printf("nd"); break;
		case 3: printf("rd"); break;
		default: printf("th"); break;
	}

	printf(" day of ");

	switch(m){
		case 1: printf("Jan"); break;
		case 2: printf("Feb"); break;
		case 3: printf("Mar"); break;
		case 4: printf("Apr"); break;
		case 5: printf("May"); break;
		case 6: printf("Jun"); break;
		case 7: printf("Jul"); break;
		case 8: printf("Aug"); break;
		case 9: printf("Sep"); break;
		case 10: printf("Oct"); break;
		case 11: printf("Nov"); break;
		case 12: printf("Dec"); break;
	}

	printf(", 20%d", y);

	printf("\n");
}