#include <stdio.h>
#include <string.h>

void sortArr(char *c);
void sortArr2(char *c);


int main()
{
   int result;  char c; int i;  int count=0;
   char arr[50];
   fgets(arr,50,stdin);
   while ( strcmp(arr,"quit\n") )
   {
       arr[strlen(arr)-1] = '\0'; // remove the trailing \n

       sortArr2(arr);
       printf("%s\n\n", arr);

       fgets(arr,50,stdin);

    }
   return 0;
}

/*  selection sort */
void sortArr(char * c)
{

   int n = strlen(c); 
   int i;
   for (i=0; i<n-1; i++){
     char min = *(c+i);
     int j; int minPos=i;
     for (j=i+1; j<n; j++){

         if (*(c+j) < min){
           minPos = j; 
           min = *(c+j); 
         }
     } 
     char tmp = *(c+i);
     *(c+i) = *(c+minPos);
     *(c+minPos) = tmp;
     
    } 

}

/* selection sort, another version, a local pointer  */
void sortArr2(char * c)
{

   int n = strlen(c); 
   int i;
   char *c1 = c;
   for (i=0; i<n-1; i++){
     char min = *c1;
     int j = i+1; 
     int minPos=i;
     char * c2 = c+j;
     for (; j<n; j++){

         if (*c2 < min){
           minPos = j; 
           min = *c2; 
         }
         c2++;
     }
     char tmp = *c1;
     *c1 = *(c+minPos);
     *(c+minPos) = tmp;
     c1++;
    }

}
