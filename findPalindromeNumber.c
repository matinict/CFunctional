//1. Write a c program for palindrome
//2. C program to find palindrome of a number
//3. Palindrome number in c language

#include <stdio.h>
main(void){
    int n,r,sum,temp,min,max;
    printf("Enter the minimum range: ");scanf("%d",&min);
    printf("Enter the maximum range: ");scanf("%d",&max);
    printf("Palindrome numbers in given range are: ");
    
    for(n=min;n<=max;n++){
        temp=n; sum=0;
        while(temp){
            r=temp%10;
            temp=temp/10;
            sum=sum*10+r;
        }
        if(n==sum){printf("%d ",n);}
    }
}
    
// Sample output:
//Enter the minimum range: 1
//Enter the maximum range: 50
//Palindrome numbers in given range are: 1 2 3 4 5 6 7 8 9 11 22 33 44
