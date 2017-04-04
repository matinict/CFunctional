//Write a C program to sort numbers in ascending and descending order.


  #include <stdio.h>
#include <stdio.h>

main(void){
    int n, data[100], i, j, temp;
    
    /* get the number of entries */
    printf("Enter your input for n:");
    scanf("%d", &n);
    
    /* get the input data */
    printf("Enter your %d input element with space here : ",n);
    for (i = 0; i < n; i++)
        scanf("%d", &data[i]);
    
    /* sort the given data in ascending order */
    for (i = 0; i < n-1; i++) {
        for (j = i + 1; j < n; j++) {
            if (data[i] > data[j]) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    
    /* data in ascending order */
    printf("Ascending Order: ");
    for (i = 0; i < n; i++)
        printf("%d ", data[i]);
    
    /* data in descending order */
    printf("\nDescending Order: ");
    for (i = n-1; i >= 0; i--)
        printf("%d ", data[i]);
    
    return 0;
}
//Enter your input for n:5
//Enter your 5 input element here: 1 2 3 9 4
//Ascending Order: 1 2 3 4 9
//Descending Order: 9 4 3 2 1
