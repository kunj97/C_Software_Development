#include <stdio.h>



int main(){

  char input[30];
  int i; int dates;
  int day, year, month;

  printf("Enter 'month-day year' : " );
  fgets(input, 30, stdin);  /* read in the whole line */

  while (strcmp(input,"quit\n") )
   {
    /* manipulate the input, count days and display */

    sscanf(input, "%d,%d,%d", &month, &day, &year);
    dates = countDays(year,month,day);

    printf("%d days of year %d have elapsed\n\n", dates,year);


    // read again
    printf("Enter 'month-day year': " );
    fgets(input, 30, stdin);  /* read in the whole line */
  }

  return 0;


}


int countDays(int y, int m, int d){

    int i;
    int resu = 0;

    for(int = 1; i<m; i++){
        if(i == 2){
            if(isLeap(y)){
                resu =+ 29;
            }
            else resu += 28;
        }
        else if(i% 2 == 0)
            resu =+ 30;
        else resu += 31;
    }
    resu =+ d;
return resu;

}


