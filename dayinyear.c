/* Write a program that reads a date in dd/mm/yyyy format and calculates the day number within the year. */

/* Example calls:

    Enter date in dd/mm/yyyy format: 1/5/2003
    01/05/2003 is day number 121 in the year

    Enter date in dd/mm/yyyy format: 31/12/2000
    31/12/2000 is day number 366 in the year


*/

#include <stdio.h>
#include <stdlib.h>

int main (int argv, char *argc[]) {

    int day, month, year;
    
    
    printf("Enter a date in dd/mm/yyyy format: ");
    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {

        printf("Please enter a valid date\n");
        exit(EXIT_FAILURE);    
    }

    printf("The date today is: %02d/%02d/%02d\n", day, month, year);
    int i, past_days = 0, day_in_month, current_day;

    for (i=1; i < month; i++) {
        
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            day_in_month = 31;
            
        }
        else if (i != 2) {
            day_in_month = 30;
            
        
        }
        else {
            if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)) {
                day_in_month = 29;
                
            }
            else {
                day_in_month = 28;
                
            }
        }
        past_days += day_in_month;
    }
    current_day = past_days + day;
    
    printf("%02d/%02d/%02d is day number %d in the year\n", day, month, year, current_day);
    return 0;

}