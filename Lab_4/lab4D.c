#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{


     char name[SIZE], wage[SIZE],  age[SIZE];
     char resu[SIZE2], resu2[SIZE2], resu3[SIZE2];

     printf("Enter name, age and wage (xxx to quit): ");
     scanf("%s %s %s", name, age, wage);
     while (1)
     {
        int ag = atoi(age) + 10;
        double wag = atof(wage) *2;
        name[0] = toupper (name[0]);

        sprintf(resu, "%s-%d-%.3f-[%d,%d]", name, ag, wag, (int)floor(wag), (int)ceil(wag));

        strcpy (resu2, resu);
        sprintf(resu3, "%s", resu);

        printf("%s\n%s\n%s\n\n", resu, resu2, resu3);

        printf("Enter your name, age and wage(aa to quit): ");
        scanf("%s %s %s", name, age, wage);


      /* use scanf to read again */
      }
      return 0;
}
