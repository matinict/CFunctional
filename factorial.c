#include <stdio.h>
main(void){
    int c, n, fact = 1;
    printf("Enter a number to calculate it's factorial:\n");
    scanf("%d", &n);
    
    for (c = 1; c <= n; c++){ fact = fact * c;}
    printf("Factorial of %d = %d\n", n, fact);
    
}
//Enter a number to calculate it's factorial:6
//Factorial of 6 = 720