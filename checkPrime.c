//Program to Check Prime Number

#include <stdio.h>
main(void){
    int n, i, flag = 0;
    printf("Enter a positive integer: ");scanf("%d",&n);
    
    for(i=2; i<=n/2; ++i){
        // condition for nonprime number
        if(n%i==0){flag=1;  break;}
    }
    
    if (flag==0){ printf("%d is a prime number.",n);}
    else{printf("%d is not a prime number.",n);}
}

// Sample output:
//Enter a positive integer: 29
//29 is a prime number.
