/**
Project 1 Problem 2
Tabular Dates
**/
#include <stdio.h>

int main()
{
	int dayOne,monthOne,yearOne;
	int dayTwo,monthTwo,yearTwo;
	int dayThree,monthThree,yearThree;
	int dayFour,monthFour,yearFour;

	// Input
	printf("Enter date 1 (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&dayOne,&monthOne,&yearOne);
	printf("Enter date 2 (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&dayTwo,&monthTwo,&yearTwo);
	printf("Enter date 3 (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&dayThree,&monthThree,&yearThree);
	printf("Enter date 4 (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&dayFour,&monthFour,&yearFour);
	// Output
	//Checking to see if the number is  digits or not
	if((dayOne||dayTwo||dayThree||dayFour||monthOne||monthTwo||monthThree||monthFour)<10||((yearOne||yearTwo||yearThree||yearFour)<1000&&(yearOne||yearTwo||yearThree||yearFour)>0))
	{
	printf("\nYear\tMonth\tDay\n");
	printf("%4.4d\t%2.2d\t%.2d\n",yearOne,monthOne,dayOne);
	printf("%4.4d\t%2.2d\t%.2d\n",yearTwo,monthTwo,dayTwo);
	printf("%4.4d\t%2.2d\t%.2d\n",yearThree,monthThree,dayThree);
	printf("%4.4d\t%2.2d\t%.2d\n",yearFour,monthFour,dayFour);
	}
	else
	{
	printf("\nYear\tMonth\tDay\n");
	printf("%4d\t%2d\t%d\n",yearOne,monthOne,dayOne);		
	printf("%4d\t%2d\t%d\n",yearTwo,monthTwo,dayTwo);
	printf("%4d\t%2d\t%d\n",yearThree,monthThree,dayThree);
	printf("%4d\t%2d\t%d\n",yearFour,monthFour,dayFour);
	}
	return 0;
} 