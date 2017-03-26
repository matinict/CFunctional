
//C program to find string length

#include <stdio.h>
#include <string.h>
  main(void){
   char a[100]; int length;
   printf("Enter a string to calculate it's length: \n");gets(a);
   
   length = strlen(a);
   printf("Length of entered string is = %d\n",length);
}
// Sample output:
//Enter a string to calculate it's length: Raseda
//Length of entered string is = 6
