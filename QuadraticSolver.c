/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int coefficients[3];
  int x1;
  int x2;
  printf ("Enter 2 numbers: ");
  scanf ("%d %d", &x1, &x2);
  coefficients[0] = 1;
  coefficients[1] = 0 - x1 - x2;
  coefficients[2] = x1 * x2;
  for (int i = 0; i <= 2; i++)
    {
      printf ("%d, ", coefficients[i]);

    }

  return 0;
}
