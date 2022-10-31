#include <stdio.h>

int extra_year, day, month, year, last_day, new_year, new_month, repeater;
int main () {
repeater = 1;
do
{
extra_year = 0; // 0 here is not a value, it is a state of being on or off.
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
    extra_year = 1;  //We add a leap day every four years, except for every 100 years, except for every 400 years.
if (year % 100 == 0) //So we need to check it three times, possibly changing the value up to three times.Ex:1600
    extra_year = 0;  //This is caused by the design of the gregorien calendar.
if (year % 400 == 0)
    extra_year = 1;
if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) 
    last_day = 31;
if (month == 4 || month == 6 ||month == 9 ||month == 11 ) 
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
if (last_day == day && month == 12)
    printf("The next day of %d.%d.%d is 0%d 0%d.%d\n", day, month, year, new_day, new_month, new_year);
else if((last_day == day) && month < 9)
    printf("The next day of %d.0%d.%d is 0%d 0%d.%d\n", day, month, year, new_day, new_month, new_year);
else if ((last_day == day) && month == 9)
    printf("The next day of %d.0%d.%d is 0%d %d.%d\n", day, month, year, new_day, new_month, new_year);
else if ((last_day == day) && month > 9)
    printf("The next day of %d.%d.%d is 0%d %d.%d\n", day, month, year, new_day, new_month, new_year);
else if (day < 9 && month < 9)
    printf("The next day of 0%d.0%d.%d is 0%d.0%d.%d\n", day, month, year, new_day, new_month, new_year);
else if (day < 9 && month == 9)
    printf("The next day of 0%d.0%d.%d is 0%d.%d.%d\n", day, month, year, new_day, new_month, new_year);
else if (day < 9 && month > 9)
    printf("The next day of 0%d.%d.%d is 0%d.%d.%d\n", day, month, year, new_day, new_month, new_year);
else if (day == 9 && month < 9)
    printf("The next day of 0%d.0%d.%d is %d.0%d.%d\n", day, month, year, new_day, new_month, new_year);
else if (day == 9 && month == 9)
    printf("The next day of 0%d.0%d.%d is %d 0%d.%d\n", day, month, year, new_day, new_month, new_year);
else if (day == 9 && month > 9)
    printf("The next day of 0%d.%d.%d is %d %d.%d\n", day, month, year, new_day, new_month, new_year);
else if (day > 9 && month < 9)
    printf("The next day of %d.0%d.%d is %d 0%d.%d\n", day, month, year, new_day, new_month, new_year);
else if (day > 9 && month == 9)
    printf("The next day of %d.0%d.%d is %d %d.%d\n", day, month, year, new_day, new_month, new_year);
else if (day > 9 && month > 9)
    printf("The next day of %d.%d.%d is %d %d.%d\n", day, month, year, new_day, new_month, new_year);
}
} while (repeater = 1);
}


   
