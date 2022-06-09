/* Jason Kee - U98628586
   Assignment 3 - Sieve of Eratosthenes

   A program that will find all the prime numbers within the size of array
   given by the user.
*/

#include <stdio.h>

// Method of flipping numbers in an array to 0
void flipNum(int arr[], int size) {
    int currentPos = 2;
    while (currentPos < size) {
        if (arr[currentPos] != 1) {
            currentPos++;
        } else {
            for (int num = currentPos * 2; num < size; num = num + currentPos) {
               arr[num] = 0;
            }
            currentPos++;
        }
    }
}

int main() {
    int size;
    // Requesting size of array from user.
    printf("Please enter a size of the array: ");
    scanf("%d",&size);
    size++;
    // Setting the values to 1
    int arr[size];
    for (int num = 0; num < size; num++) {
        arr[num] = 1;
    }
    // Flipping the Numbers
    flipNum(arr, size);
    int count = 0; // Number of primes
    for (int num = 2; num < size; num++) {
        // If the number is 1, it is a prime
        if (arr[num] == 1) {
            count++;
            // Formatting the output
            printf("%5d", num);
            if (count%10 == 0) {
                printf("\n");
            }
        }
    }
    // Output for number of primes
    printf("\nThe total number of primes is: %d\n", count);

    return 0;
}