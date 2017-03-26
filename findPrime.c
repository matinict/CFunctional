//C program to print all prime numbers between 1 to n

#include <stdio.h>
main(void){
    int i, j, start,end,isPrime; //isPrime is used as flag variable
    printf("Enter lower limit: ");scanf("%d", &start);
    printf("Enter upper limit: ");scanf("%d", &end);
    printf("All prime numbers between %d to %d are: \n", start, end);
    
    /* Find all Prime numbers between 1 to n */
    for(i=start; i<=end; i++) {
        /* Assume that the current number is Prime */
        isPrime = 1;
        /* Check if the current number i is prime or not */
        for(j=2; j<=i/2; j++){ if(i%j==0){isPrime = 0; break;}  }
        /* If the number is prime then print */
        if(isPrime==1){printf("%d, ", i);}
    }
}

// Sample output:
//Enter lower limit: 1
//Enter upper limit: 111
//All prime numbers between 1 to 111 are:
//1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109,
