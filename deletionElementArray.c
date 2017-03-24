#include <stdio.h>
main(void){
    int array[100], position, c, n;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for ( c = 0 ; c < n ; c++ ){ scanf("%d", &array[c]);}
    printf("Enter the location where you wish to delete element:\n");
    scanf("%d", &position);
    
    if (position >= n+1 ){ printf("Deletion not possible:\n");}
    
    else{
        for ( c = position - 1 ; c < n - 1 ; c++ ){array[c] = array[c+1];}
        printf("Resultant array is :");
        for( c = 0 ; c < n - 1 ; c++ ){ printf("%d ", array[c]);}
    }
    
}
//Enter number of elements in array:5
//Enter 5 elements: 4 6 8 10 7
//Enter the location where you wish to delete element:2
//Resultant array is :4 8 10 7
