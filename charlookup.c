/* Jason Kee - U98628586
   Assignment 2 - Character Lookup

   A program that asks the user to input an integer between 32 and 126 inclusive
   It will check if the number provided falls into range and then use the ASCII
   table to provide the corresponding character.  If the user provides a number
   outside of the range, it will prompt and loop back and request again.
*/

#include <stdio.h>

int main()
{
    int number;
    while (1)
    {
        printf("Please enter a number between 32 and 126 inclusive: ");
        scanf("%d", &number);
        if (number>=32 && number<=126)
            break;
        else
          printf("The number you entered is outside of the requested range\n");
    }
    printf("The integer you entered was: %d\n", number);
    printf("The ASCII character for that integer is: %c\n", number);
    return 0;
}
