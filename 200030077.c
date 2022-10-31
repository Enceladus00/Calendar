#include <stdio.h>

int extra_year, day, month, year, last_day, new_year, new_month;
int main () {
extra_year = 0;
printf ("Enter a date (0 0 0 to quit):");
scanf ("%d %d %d", &day, &month, &year);
if (day == 0 && month == 0 && year == 0) {
    printf("Thanks for using our calendar!");
    return 0;
} else {
int new_day = day + 1;
new_month = month;
new_year = year;
if (year % 4 == 0) 
    extra_year = 1;
if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) 
    last_day = 31;
if (month == 4 ||month == 6 ||month == 9 ||month == 11 ) 
    last_day = 30;
if ((extra_year == 1) && (month == 2 ))
    last_day = 29;
if ((extra_year == 0) && (month == 2 ))
    last_day = 28;
if (last_day == day) {
    new_day = 1;
    new_month = month + 1; } 
if ((month == 12) && (day == 31)) {
    new_day = 1;
    new_month = 1;
    new_year = year + 1; }
/*The program knows every single correctly calculated values at this point. Now we need it to convert
  the bold format to formal calendar format (5 2 2022 -> 06.02.2022)*/
if (day < 9 && month < 9)
    printf("The next day of 0%d.0%d.%d is 0%d.0%d.%d", day, month, year, new_day, new_month, new_year);
else if (day < 9 && month = 9)
    printf("The next day of 0%d.0%d.%d is 0%d.%d.%d", day, month, year, new_day, new_month, new_year);
else if (day < 9 && month > 9)
    printf("The next day of 0%d.%d.%d is 0%d.%d.%d", day, month, year, new_day, new_month, new_year);
else if (day = 9 &&)
    printf("The next day of 0%d.%d.%d is %d.%d.%d", day, month, year, new_day, new_month, new_year);
}
}


   