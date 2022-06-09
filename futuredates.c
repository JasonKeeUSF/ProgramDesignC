/* Jason Kee - U98628586
   Assignment 2 - Future Dates

   A program that asks the user for the current day of the week (as an integer between 0
   and 6 where 0 is Sunday, 1 is Monday … 6 is Saturday), the number of days after the
   current day of the week and determines and displays the future day of the week.
*/

#include <stdio.h>

int main()
{
    int dayCurrent, dayFuture;

    // Requesting the integer from the user for the current day
    while(1)
    {
        printf("\nPlease enter the current day as an integer between 0 and 6\n(0 is Sunday, 1 is Monday ..., 6 is Saturday): ");
        scanf("%d", &dayCurrent);
        if(dayCurrent>=0 && dayCurrent<=6)
            break;
        else
            printf("You did not enter a correct number.");
    }

    // Requesting the integer from the user for the future day
    while(1)
    {
        printf("\nPlease enter another integer for the amount of days in the future: ");
        scanf("%d", &dayFuture);
        if(dayFuture>0)
            break;
        else
            printf("You did not enter a valid number.");
    }

    // Switch case for Current Day
    switch (dayCurrent)
    {
        case 0:
            printf("\nToday is Sunday. ");
            break;
        case 1:
            printf("\nToday is Monday. ");
            break;
        case 2:
            printf("\nToday is Tuesday. ");
            break;
        case 3:
            printf("\nToday is Wednesday. ");
            break;
        case 4:
            printf("\nToday is Thursday. ");
            break;
        case 5:
            printf("\nToday is Friday. ");
            break;
        case 6:
            printf("\nToday is Saturday. ");
            break;
    }
    
    // Mod statement to ensure second switch case is true
    int futureDay = (dayCurrent+dayFuture) % 7;
    
    // Switch case for Future Day
    switch (futureDay)
    {
        case 0:
            printf("In %d days, it will be Sunday.", dayFuture);
            break;
        case 1:
            printf("In %d days, it will be Monday.", dayFuture);
            break;
        case 2:
            printf("In %d days, it will be Tuesday.", dayFuture);
            break;
        case 3:
            printf("In %d days, it will be Wednesday.", dayFuture);
            break;
        case 4:
            printf("In %d days, it will be Thursday.", dayFuture);
            break;
        case 5:
            printf("In %d days, it will be Friday.", dayFuture);
            break;
        case 6:
            printf("In %d days, it will be Saturday.", dayFuture);
            break;
    }
}