//square

#include <stdio.h>

int main()
{
	int entry;
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &entry)

/**	int i = 1;
	while(i <= entry)
	{
		printf("\t%d\t%d\n",i,i*i);
		i++;
	}
	**/
	for(int i=1,i<=entry;i++)
	{
		printf("\t%d\t%d\n",i,i*i);
	}
	return 0;
}