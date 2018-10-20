//Dimentional Weight

#include <stdio.h>

int main()
{
	int h = 8;
	int w = 10;
	int l = 12;

	int volume = h * w * l;
	int dweight = (volume + 165) / 166;

	printf("D Weight is: %d\n", dweight);

	return 0;
}