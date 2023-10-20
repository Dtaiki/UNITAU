#include<stdio.h>
#include<stdlib.h>
                             /* Chapter 4 - Program 1 - INTASIGN.C */
/* This program will illustrate the assignment statements          */

int main()
{
int a, b, c;    /* Integer variables for examples */

   a = 12;
   b = 3;
   c = a + b;          /* simple addition                */
   printf("%d\n",c);
   c = a - b;          /* simple subtraction             */
   printf("%d\n",c);
   c = a * b;          /* simple multiplication          */
   printf("%d\n",c);
   c = a / b;          /* simple division                */
   printf("%d\n",c);
   c = a % b;          /* simple modulo (remainder)      */
   printf("%d\n",c);
   c = (12*a + b/2 - a*b*2)/(a*c + b*2);
   printf("%d\n",c);
   c = (c/4+13*(a + b))/(3 - a*b + 2*a*a);
   printf("%d\n",c);
   a = a + 1;          /* incrementing a variable        */
   printf("%d\n",a);
   b = b * 5;
   printf("%d\n",b);

   a = b = c = 20;     /* multiple assignment            */
   printf("%d\n",a);
   a = b = c = (a + b * c/ 3);
   printf("%d\n",a);

   a = (b = (c = 20)); /* Identical to line 22           */
   printf("%d\n",a);

  system ("pause");
  return 0;
}



/* Result of execution

(No output from this program.)

*/
