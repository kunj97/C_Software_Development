#include <stdio.h>

int isLeap(int);

int main()
{
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  while (year > 0){
    if (isLeap(year))
      printf("Year %d is a leap year\n", year);
    else  printf("Year %d is not a leap year\n", year);

    printf("Enter a year: ");
    scanf("%d", &year);


   }
}
int isLeap(int year){
   if ( ( (year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0) )
     return 11;
   else return 0;

  }
