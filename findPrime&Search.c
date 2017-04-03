
#include <stdio.h>

main(void){
    
    int i, j, start,end,isPrime,count=0,a[200],x,k; //isPrime is used as flag variable
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
        if(isPrime==1){
            a[count]= i;
            printf("%d, ", i);
             count++;
        }
       
        //
    }
    //Search Number
   
   printf("\nEnter postion :"); scanf("%d",&x);
    printf("number is %d",a[x-1] );
    
    //for(k=0;k<count;++k){
        
       // printf("number is %d",a[x] );
    //}
        //if(a[k]==x) break;}
    
    //if(k<count){ printf("Element found at index %d ",k);}
    //else{printf("Element not found ");}
    

}
//OutPut
//Enter lower limit: 3
//Enter upper limit: 16
//All prime numbers between 3 to 16 are: 
//3, 5, 7, 11, 13, 
//Enter postion :3
//number is: 7
