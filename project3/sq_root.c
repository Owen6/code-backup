/**Project 3
This Program will calculate the square root of a given integer by guessing until it is within a "good enough" range.
**/
#include <stdio.h>
#include <math.h>

int main(void){
	double n;
	double guess = 1;
	printf("Enter a number: ");
	scanf("%lf",&n);

	do{
		double old_guess = guess;
		printf("%10.5lf\n",guess);
		guess = (old_guess+(n/old_guess))/2.0;
	}while(fabs(guess*guess-n) > (1e-5));

	printf("Estimated square root of %.5lf: %.5lf\n",n,guess);
	return 0;
}