#include <stdio.h>
main(void){
    int i, n; float arr[100];
    printf("Enter total number of elements(1 to 100): ");scanf("%d", &n);
    printf("Enter elements of number with space : ");
    
    // Stores number entered by the user
    for(i = 0; i < n; ++i){ scanf("%f", &arr[i]); }
    
    // Loop to store largest number to arr[0]
    for(i = 1; i < n; ++i){
        if(arr[0] < arr[i]){ arr[0] = arr[i]; }
    }
    printf("Largest element = %.2f ", arr[0]);
}
//Enter total number of elements(1 to 100): 3
//Enter elements of number with space : 11 22.1 33.1
//Largest element = 33.10
