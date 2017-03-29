
//1. Factorial program by recursion in c
//2. Factorial program in c using recursion
//3. C program to calculate factorial using recursion
//4. Recursive function for factorial in c

#include <stdio.h>

int fact(int);
int main(){
    int num,f;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    f=fact(num);
    printf("\nFactorial of %d is: %d ",num,f);
    return 0;
}

int fact(int n){
    if(n==1){return 1;}
    else{return(n*fact(n-1));}
}

// Sample output:
//Enter a number: 9

//Factorial of 9 is: 362880
