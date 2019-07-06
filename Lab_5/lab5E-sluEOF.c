/* Passing an array to a function. */

#include <stdio.h>

#define MAX 20
 

int largest(int * x);
void display(int *arr);

 main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i;
        count++;
     }
     *(array+count) = -100; // a sential token

      /* Call the function and display the return value. */
      printf("inputs: ");
      display(array);

     
     
     printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 
 /* Function largest() returns the largest value */
 /* in an integer array */

 void display(int *arr)
 {
   int i=0;
   while ( * (arr+i) >= 0){
      printf("%d ", *(arr+i) ); 
       i++;
   } 
 }

 int largest(int * arr)
 {
     int i=0, biggest = *arr;
     int a;
     while( *(arr+i) >= 0){
        a = * (arr+i);
        if(a > biggest)
           biggest = a;
        i++;
     } 
     return biggest;
 }

