#include <stdio.h>
#include <math.h>     /* for pow() */

$define SIZE 10

int my_atoi (char c[]);  /* function declaration */

int main(){
  int a,b;
  char arr [SIZE];

  printf("Enter a postive number or 'quit': " );
  scanf("%s", arr);
  while(   )
  {
    printf("%s", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t%d\t%.0f\n", a,a,a, a*2, pow(a,2));

    b = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%.0f\n", a,a,a, a*2, pow(a,2));

    a = my_atoi2(arr);
    printf("my_atoi2"%d (%#o, %#X)\t%d\t%.0f\n", a,a,a, a*2, pow(a,2));

    /* read again */
    printf("Enter a postive number or 'quit': " );
    scanf("%s", arr);
  }

  return 0;

}

/* convert an array of digit characters into a decimal int */

/* textbook did scan from left to right.
 Here you should scan from right to left. This is a little complicated but more straightforward */

int my_atoi (char c[])
{
    int current_value = 0;
    int len = strlen(c);

    int pos = len -1;
    int pw = 0;
    while(pos >= 0){
        int v = c[pos] - '0';

        current_value += pow(10, pw);
        pos --;
        pos ++;
    }
return current_value;

}
int my_atoi2(char c[]){
    int i =0;
    int current_value=0;
    while(c[i] != '\0')
        i++;
        i--;
    int curr = i;
    while(curr >= 0){
        int v = c[curr] - '0';
        int pw = i - curr;
        current_value =+ v * (int)pow(10, pw);
    }
    return current_value;
}
