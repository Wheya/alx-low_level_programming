#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

<<<<<<< HEAD
<<<<<<< HEAD
=======

>>>>>>> 75ccdf8d2cf5b596219c885798750b0fa56968bb
=======
>>>>>>> b7f6bbe8c86c58e99ef5d7d16048e35a18f65101
void print_remaining_days(int month, int day, int year)
{
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
{
if (month >= 3 && day >= 60)
{
day++;
}

<<<<<<< HEAD
<<<<<<< HEAD
=======

>>>>>>> 75ccdf8d2cf5b596219c885798750b0fa56968bb
=======
>>>>>>> b7f6bbe8c86c58e99ef5d7d16048e35a18f65101
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
<<<<<<< HEAD
<<<<<<< HEAD
if (month == 2 && day == 60)
}
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
=======
>>>>>>> 75ccdf8d2cf5b596219c885798750b0fa56968bb
=======
if (month == 2 && day == 60)
{
print("invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
>>>>>>> b7f6bbe8c86c58e99ef5d7d16048e35a18f65101
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
