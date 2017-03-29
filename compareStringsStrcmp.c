//C program to compare two strings using strcmp
#include <stdio.h>
#include <string.h>

main(void){
    char a[100], b[100];
    
    printf("Enter the first string: ");
    gets(a);
    
    printf("Enter the second string: ");
    gets(b);
    
    if (strcmp(a,b) == 0)
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");
    
    
}

// Sample output:
//nter the first string: matin
//Enter the second string: matin
//Entered strings are equal.
