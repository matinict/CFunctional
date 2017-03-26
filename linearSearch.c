
#include <stdio.h>
main(void){
    int n,a[20],i,x;
    printf("How many elements Number? ");scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;++i){ scanf("%d",&a[i]);}
    
    printf("\nEnter element to search:"); scanf("%d",&x);
    
    for(i=0;i<n;++i){ if(a[i]==x) break;}
    if(i<n){ printf("Element found at index %d",i);}
    else{printf("Element not found");}
    
}
//How many elements Number? 4
//Enter array elements: 6 8 9 1
//Enter element to search:9
//Element found at index 2
