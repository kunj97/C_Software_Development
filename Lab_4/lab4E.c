
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
    char inputs_table [ROWS][COLUMNS];

    int age;
    float wage;
    int current_row = 0; int i;

    char name[10];
    char ages[10];
    char wages[10];



    printf("Enter name age and wage: ");
    scanf("%s %s %s", name ,age ,wage);

    while (strcmp(name,"aa")){

    sprintf(inputs[current_row], "%s %s %s", name, age, wage);

    age = atoi(age)+10;
    wage = atof(wage)+1.5;

    for(i = 0; i < strlen(name); i ++){
        name[i] = toupper(name[i]);
    }
    sprintf(inputs[current_row + 1], "%s %d, %.2f", name, age, wage);

    printf("Enter name age wage: ");
    scanf("%s %s %s", name, age, wage);

    current_row += 2;

    }
     printf("\nrecords generated %s %s %s\n",_FILE_,_DATE_,_TIME32_);
     /* now display the input_table row by row */

     for(i=0; i < current_row; i++){
        printf("%s\n", inputs[i]);
     }

     return 0;
}

