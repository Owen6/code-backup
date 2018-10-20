/**
Project 1 Problem 1
Properties of a Circle
**/
#include <stdio.h>
//Giving pi a value
#define pi 3.14f

int main()
{
	//Taking in the radius of the circle
	int radius;
	printf("This program computes values related to an inscribed circle.\n");
	printf("Enter the value of the radius: ");
	scanf("%d", &radius);
	//Variable Calculations
	int diameter = radius*2;
	float circumference = pi*diameter;
	float areaCircle = pi*(radius*radius);
	int perimeter = diameter*4;
	int areaSquare = diameter*diameter;
	float areaDifference = areaSquare - areaCircle;
	//Printing Outputs
	printf("The diameter of the circle is: %d\n",diameter);
	printf("The circumference of the circle is: %6.3f\n", circumference);
	printf("The area of the circle is: %6.3f\n", areaCircle);
	printf("The perimeter of the square is: %d\n", perimeter);
	printf("The area of the square is: %d\n", areaSquare);
	printf("The difference between the area of the square and the circle is %5.3f\n", areaDifference);

	return 0;	
}