/* Jason Kee - U988628586
   Assignment 1 - Shapes inscribed in a circle */

#include <stdio.h>
#include <math.h>

int main()
{
	// Ask the user for the radius
	double rad;
	printf("Please provide a radius of a circle: ");
	scanf("%lf", &rad);

	// Calculate Circumference and Area of Circle
	double circCircle = 2*M_PI*rad;
	double areaCircle = M_PI*rad*rad;
	printf("The Circumference of the Circle is: %.3f\n", circCircle);
	printf("The Area of the Circle is: %.3f\n", areaCircle);

	// Calculate Side Length, Perimeter and Area of Square in Circle
	double lengthSquare = sqrt(2)*rad;
	double periSquare = 4*sqrt(2)*rad;
	double areaSquare = 2*(rad*rad);
	printf("The Side Length of the Square inside the Circle is: %.3f\n", lengthSquare);
	printf("The Perimeter of the Square inside the Circle is: %.3f\n", periSquare);
	printf("The Area of the Square inside the Circle is: %.3f\n", areaSquare);

	// Calculate Side Length, Perimeter and Area of Triangle in Circle
	double lengthTriangle = sqrt(3)*rad;
	double periTriangle = 3*sqrt(3)*rad;
	double areaTriangle = (3*sqrt(3)*(rad * rad))/8;
	printf("The Side Length of the Triangle inside the Circle is: %.3f\n", lengthTriangle);
	printf("The Perimeter of the Triangle inside the Circle is: %.3f\n", periTriangle);
	printf("The Area of the Triangle inside the Circle is: %.3f\n", areaTriangle);

	return 0;
}
