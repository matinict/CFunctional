//check perfect number
//Perfect number is a positive integer which is equal to the sum of its proper positive divisors. Read more about Perfect numbers. 
//For example: 6 is the first perfect number
//Proper divisors of 6 are 1, 2, 3 
//Sum of its proper divisors = 1 + 2 + 3 = 6. 
//Hence 6 is a perfect number.

#include <stdio.h>
main(void){
    int n,i=1,sum=0;
    printf("Enter a number: ");scanf("%d",&n);
    while(i<n){
        if(n%i==0){ sum=sum+i;}
        i++;
    }
    if(sum==n){ printf("%d is a perfect number",i);}
    else{ printf("%d is not a perfect number",i);}
}
//Enter a number: 6
//6 is a perfect number
