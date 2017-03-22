
#include <stdio.h>
main(void){
    int n,first=0, last, middle,search = 0, array[100];
    printf("Enter Number Of Search Elements:\n");
    scanf("%d",&n);
    
    printf("Enter %d integers \n",n);
    for (int c=0; c<n; c++) { scanf("%d", &array[c]); }
    
    printf("Enter Value to Find\n");
    scanf("%d",&search);
    
    last=n-1; middle=(first+last)/2;
    while (first <=last ) {
        if (array[middle] < search) { first=middle+1; }
        else if (array[middle] == search){ printf("%d found at location %d.",search, middle+1); break; }
        else{ last = middle -1; }
        
        middle = (first + last)/2;
    }
    if (first > last) { printf("Not Found! %d is not present in the list \n",search); }
}


//Enter Number Of Search Elements:
//7
//Enter 7 integers 
//-4
//5
//8
//9
//11
//43
//485
//Enter Value to Find
//11
//11 found at location 5.Program ended with exit code: 0
