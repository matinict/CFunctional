#include <stdio.h>
main(void){
    int number, rem, sum = 0, i;
    printf("Enter a Number:"); scanf("%d", &number);
    for (i = 1; i <= (number - 1); i++){ rem = number % i;if (rem == 0){sum = sum + i;} }
    if (sum == number){printf("Entered Number is perfect number\n");}
    else{printf("Entered Number is not a perfect number\n");}
}
//Enter a Number:4
//Entered Number is not a perfect number
