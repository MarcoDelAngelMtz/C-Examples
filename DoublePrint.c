/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
 char message[30];

 printf("Enter a message: ");
 scanf("%s", message);

 for (int i = 0; i < strlen(message); i++) {
   printf("%c", message[i]);
   printf("%c", message[i]);
 }

 return 0;
}

