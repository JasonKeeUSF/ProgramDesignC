/* Jason Kee - U98628586
   Assignment 3 - Eliminate Duplicates

   A program that requests 15 numbers between 1 and 100 inclusive. As each
   number is entered, store it in a 1-dimensional array only if it is not a
   duplicate of a number that was already read. After the input is read,
   access the array to display only the distinct values based on the numbers
   that were entered.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Intiating the array and variables
    int arr[15], number, size=0;
    // Prompt the user for the numbers
    printf("Please enter 15 numbers between 1 and 100:\n");
    while(size<15) {
        scanf("%d", &number);
        // Validate number and check if duplicate
        if (number < 1 || number > 100)
            break;
        bool flag = false;
        for (int dupe = 0; dupe < size; dupe++) {
            if (arr[dupe] == number) {
                flag = true;
                break;
            }
        }
        // Inserting into array if not a duplicate
        if (!flag)
            arr[size++] = number;
    }
    // Displaying the array
    printf("\nYour Array is: \n");
    for (int show=0; show<size; show++)
        printf("%d\n", arr[show]);

    return 0;
}