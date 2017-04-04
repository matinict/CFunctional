
#include <stdio.h>

main(void){
    int i,n;
    int sum_sr = 0;
    printf("\n C Program to print sum of series 2 + 4 + 6 + 8 + .... + n : \n\n ");
    
    printf("Enter an even number n : ");scanf("%d",&n);
    
    for (i = 1 ; i <= n ; i++ ){
        i = i+1;
        if(n!=i){printf(" %d +",i);}
        else{ printf(" %d ",i);}
        sum_sr = sum_sr + i;
    }
    printf(" = %d",sum_sr);
}
//C Program to print sum of series 2 + 4 + 6 + 8 + .... + n :
//Enter an even number n : 20
//2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 + 20  = 110
