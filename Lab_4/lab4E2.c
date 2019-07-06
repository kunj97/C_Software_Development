
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[ROWS][COLUMNS];

     int current_row;int i;
     char name[10];
     int age;
     float wage;

     printf("Enter name age and wage: ");
     fgets(input_table[current_row], 30, stdin);   // add a /n


     while(1)
     {
	 /* need to 'tokenize' the read in line*/
	 scanf(input[current_row],"%s %d %f", name, &age, &wage);
	 if(! strcmp(name, "aa")) break;

	 age += 10;
	 wage *= 1.5;

	 for(i = 0; i < strlen(name); i ++){
        name[i] = toupper(name[i]);
	 }
	 sprintf(input[current_row + 1], "%s %d %f\n", name, age, wage);
	 current_row += 2;

	 printf("inputs name age wage: ");
	 fgetc(input[current_row], 30, stdin);

     }
     printf("\n recourds gennrated in %s %s %s\n", _FILE_,_DATE_,_TIME_);
     for(i = 0; i < current_row; i ++);
     /* now display the input_table row by row */
	 printf("%s", input[i]);

     return 0;
}

