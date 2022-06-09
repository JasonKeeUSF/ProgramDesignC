/* Jason Kee - U98628586
   Assignment 2 - Pythagorean Triple

   A program uses brute-force computing to determine the integer sets of Pythagorean
   triples up to a limit set by the user.  It will prompt the user for a maximum for
   the hypotenuse side of the triangle and then will loop to find the sets of the
   Pythagorean triples.  After that, it will output the total number of triples that
   were found.
*/

#include <stdio.h>

int main()
{
    int max;
    int count=0;

    printf("Please enter the integer for the maximum length of the hypotenuse: ");
    scanf("%d", &max);

    printf("\nThe pythagorean triples found are: ");
    for(int hypo=1; hypo<=max; hypo++)
    {
        for(int side1=1; side1<=max; side1++)
        {
            for(int side2=1; side2<=max; side2++)
            {
                if (hypo*hypo == ((side1*side1) + (side2*side2)))
                {
                    count++;
                    printf("\n[%d, %d, %d]", side1, side2, hypo);
                }
            }
        }
    }
    printf("\nThere were %d triples found", count);
    return 0;
}