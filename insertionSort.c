#include <stdio.h>
main(void){
    int i, j, num, temp, arr[20];
    printf("Enter total elements: ");scanf("%d", &num);
    printf("Enter %d elements: ", num);
    
    for (i = 0; i < num; i++) { scanf("%d", &arr[i]); }
    for (i = 1; i < num; i++) {temp = arr[i]; j = i - 1;
        while ((temp < arr[j]) && (j >= 0)) { arr[j + 1] = arr[j];j = j - 1;}
        arr[j + 1] = temp;
    }
    printf("After Sorting: ");
    for (i = 0; i < num; i++) { printf("%d ", arr[i]);}
}
//Enter total elements: 5
//Enter 5 elements: 9 4 1 0 2
//After Sorting: 0 1 2 4 9
