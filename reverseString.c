
//C Program to Reverse a String
#include <stdio.h>
#include <string.h>
 
 main(void){
   char arr[100];
   printf("Enter a string to reverse: ");gets(arr);
   strrev(arr);
   printf("Reverse of entered string is: %s\n ",arr);
}
//Sample output:
//Enter a string to reverse:Raseda
//Reverse of entered string is:adesaR
