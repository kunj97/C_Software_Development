#include <stdio.h>

int main()
{
   int age = 10, age2=100;
   int *ptr = &age;
   printf("age: %d %d\n", age, *ptr);


   *ptr =  14;

   printf("age: %d %d\n", age, *ptr);

   int *ptr2 = &age2;
   *ptr2 = *ptr;
   printf("age2:%d %d\n", age2, *ptr2);

   ptr2 = ptr;

   (*ptr2)--;

   printf("age: %d %d %d\n", age, *ptr, *ptr2);

   printf("%p %p %p\n", &age, ptr, ptr2);

}



