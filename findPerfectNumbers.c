// C program to find perfect numbers
// C perfect number code

#include <stdio.h>
main(void){
    int n,i,sum, min,max;
    printf("Enter the minimum range: ");scanf("%d",&min);
    printf("Enter the maximum range: ");scanf("%d",&max);
    
    printf("Perfect numbers in given range is: ");
    for(n=min;n<=max;n++){
        i=1;sum = 0;
        while(i<n){
            if(n%i==0){sum=sum+i;}
            i++;
        }
        if(sum==n){printf("%d ",n);}
    }
}
//Enter the minimum range: 1
//Enter the maximum range: 1111
//Perfect numbers in given range is: 6 28 496
