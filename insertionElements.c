#include <stdio.h>
main(void){
    int n, i, arr[30], el,l;
    printf("Enter number of elements :"); scanf("%d", &n);
    printf("\nEnter Elements with space : ");
    
    for (i = 0; i <n; i++) { scanf("%d", &arr[i]);}
    
    printf("\nEnter the element to be inserted: ");scanf("%d", &el);
    printf("\nEnter the location: ");scanf("%d", &l);
    
    //Create space at the specified location
    for (i=n; i >= l; i--) { arr[i] = arr[i - 1];}
    n++;
    arr[l- 1] = el;
    
    //Print out the result of insertion
    printf("After insertion elements are: ");
    for (i = 0; i<n; i++)
        printf("%d ", arr[i]);
}


//Enter number of elements :5
//Enter Elements with space : 2 1 3 4 5
//Enter the element to be inserted: 9
//Enter the location: 2
//2 9 1 3 4 5
