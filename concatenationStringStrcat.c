//C program to concatenation String

#include <stdio.h>
#include <string.h>

main(void){
    char a[1000], b[1000];
    
    printf("Enter the first string: ");
    gets(a);
    
    printf("Enter the second string: ");
    gets(b);
    
    strcat(a,b);
    
    printf("String obtained on concatenation is: %s\n ",a);
    
}

// Sample output:
//Enter the first string:Matin
//Enter the second string:Raseda
//String obtained on concatenation is: MatinRaseda
