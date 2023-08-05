#include <stdio.h>
//Write a program that reads a date in dd/mm/yyyy format and writes, in the same format, the date it will be tomorrow.
/* Enter a date in dd/mm/yyyy format: 01/01/1999
The date today is: 01/01/1999
The date tomorrow is: 02/01/1999*/


int main(int argv, char *argc[]){

    int day, month, year, max_feb = 28;
    printf("Enter a date in dd/mm/yyyy format: ");
    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
        printf("Please enter a valid date\n");
        
    }
    printf("The date today is: %02d/%02d/%02d\n", day, month, year);
    //Check if month is 31 days or 30
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        
        if (day > 31 || day < 1) {
            printf("Please enter a valid date\n");
        }
        else if (day == 31) {
            day = 1;
            if (month == 12){
                month = 1;
                year += 1;

            } else {
                month += 1;
            }
        } else {
            day += 1;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30 || day < 1) {
            printf("Please enter a valid date");
        }
        else if (day == 30) {
            day = 1;
            month += 1;
        } else {
            day += 1;
        }

    } else {
        // If leap year, then max days = 29
        if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)) {
            max_feb = 29;
        }
        if (day == max_feb) {
            day = 1;
            month += 1;
        }
        else {
            day += 1;
        }
        
        
    }
    printf("The date tomorrow is: %02d/%02d/%d\n", day, month, year);

    return 0; 
}