/* Jason Kee - U988628586
   Assignment 1 - Interview Question */

#include <stdio.h>

int main()
{

	int first;
	printf("Enter the First Number: ");
	scanf("%d", &first);
	
	int second;
	printf("Enter the Second Number: ");
	scanf("%d", &second);

	first=first+second;
	second=first-second;
	first=first-second;

	printf("After swap First#=%d and Second#=%d", first,second);
	return 0;

}
