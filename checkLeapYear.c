

#include <stdio.h>
main(void){
    int year;
    printf("Enter any year: ");scanf("%d",&year);
    
    if(((year%4==0)&&(year%100!=0))||(year%400==0)){
        printf("%d is a leap year ",year);
    }
    else{
        printf("%d is not a leap year ",year);
    }
    

}

//Enter any year: 2321
//2321 is not a leap year
