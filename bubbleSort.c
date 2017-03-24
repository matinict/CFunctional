
//Bubble sort procedural 
#include <stdio.h>
main(void){
        int a[50],n,i,j,temp;
        printf("Enter the size of array: ");scanf("%d",&n);
        printf("Enter the array elements: ");
        for(i=0;i<n;++i){ scanf("%d",&a[i]);}
        for(i=1;i<n;++i){
            for(j=0;j<(n-i);++j)
                if(a[j]>a[j+1]) {temp=a[j];a[j]=a[j+1]; a[j+1]=temp;}
        }
        printf("\nArray after sorting: ");
        for(i=0;i<n;++i){ printf("%d ",a[i]);}
    }


//Output
//Enter the size of array: 4
//Enter the array elements: 3 7 9 2
//Array after sorting: 2 3 7 9 Program ended with exit code: 0
