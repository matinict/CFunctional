//C program to reverse a number

#include <stdio.h>
main(void){
    int n, rev= 0;
    printf("Enter a number to reverse: ");scanf("%d", &n);
    
    while (n != 0){rev = rev * 10; rev = rev+ n%10; n= n/10; }
    
    printf("Reverse of entered number is = %d\n", rev);
}

// Sample output:
//Enter a number to reverse: 54321
//Reverse of entered number is = 12345
