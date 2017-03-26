// C Program to Sort Elements Using Selection Sort Algorithm
#include <stdio.h>

main(void){
    int data[100],i,n,steps,temp;
    printf("Enter the number of elements to be sorted: "); scanf("%d",&n);
    for(i=0;i<n;++i){printf("%d. Enter element: ",i+1);
         scanf("%d",&data[i]);
    }
    
    for(steps=0;steps<n;++steps)
        for(i=steps+1;i<n;++i){
            if(data[steps]>data[i]){
                temp=data[steps];
                data[steps]=data[i];
                data[i]=temp;
            }
        }
    
    printf("In ascending order: ");
    for(i=0;i<n;++i){ printf("%d  ",data[i]);}
}

// Sample output:
//Enter the number of elements to be sorted: 5
//1. Enter element: 12
//2. Enter element: 1
//3. Enter element: 23
//4. Enter element: 2
//5. Enter element: 0
//In ascending order: 0  1  2  12  23
