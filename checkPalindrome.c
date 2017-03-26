//1. Wap to check a number is palindrome
//2. C program to find whether a number is palindrome or not

#include <stdio.h>
main(void){
    int n,r,sum=0,temp;
    printf("Enter a number: ");scanf("%d",&n);
    
    temp=n;
    while(n){r=n%10; n=n/10; sum=sum*10+r;}
    if(temp==sum){printf("%d is a palindrome ",temp);}
    else {printf("%d is not a palindrome ",temp);}
}
    
// Sample output:
//Enter a number: 131
//131 is a palindrome
