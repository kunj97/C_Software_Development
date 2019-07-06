#include <stdio.h>
#include <string.h>


int isPalindrome (char *);
int isPalindrome2 (char *);
void printReverse (char *);

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[40];
  
   fgets(arr,40,stdin);
   while ( strcmp(arr, "quit\n"))
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n

      // print backward
      printReverse(arr);
   
      result = isPalindrome2 (arr);
      if (result==1) 
         printf ("\nIs a case-insensitive palindrome.\n\n");
      else 
         printf ("\nNot a case-insensitive palindrome.\n\n");
 
      fgets(arr,40,stdin);
    }
    
    return 0;
}


int isPalindrome (char * str)
{
    int i;
    int length = strlen(str);
    if (length<1) return 1; // no more chars to compare, its palindrome

   
    for (i=0; i<length/2; i++)
    {
      char a = toupper( *(str+i) );
      char b = toupper(  *(str + length-1-i)  );
      if (a != b)
         return 0;
    }
	 
    return 1;
}

void printReverse(char * str){
  int i;
  for (i= strlen(str)-1; i >=0 ; i--)
     // printf("%c", *(str+i) );
     putchar(*(str+i));
}


int isPalindrome2 (char * input){   /* another pointer verison, which I like  */
      int len = strlen(input);
      char * end = input + len -1;   /* create a local pointer, which point to the end of the input */
      int i;
      for(i = 0; i <= len/2; i++)
      {
         if ( toupper(* input) != toupper(* end)  ) 
            return 0;
         input ++;    /* move input to the right */
         end --;      /* move end to the left  */
      }
      return 1;
}

