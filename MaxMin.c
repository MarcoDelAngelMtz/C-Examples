/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>

#include <stdio.h>
#include <limits.h>

int main()
{
  int Maxmin[10];
  int Min = INT_MAX;
  int Max = INT_MIN;
  int count = 0;
  printf("Enter an array of numbers: ");
  for (int i = 0; i < 10; i++){
      if(scanf("%d", &Maxmin[i]) != 1){
          break;
      }
      count++;
  }
  for (int f = 0; f < count; f++ ){
      if (Maxmin[f] > Max){
          Max = Maxmin[f];
      }
      else if (Maxmin[f] < Min){
          Min = Maxmin[f];
      }
  }
  printf("Max number is %d and Min number is %d", Max, Min);

  return 0;
}
