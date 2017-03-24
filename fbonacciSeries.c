
#include <stdio.h>
main(void){
    int n, a = 0, b = 1,c, i;
    printf("Enter the number of terms:");scanf("%d",&n);
    printf("First %d terms of Fibonacci series are : ",n);
    
    for ( c = 0 ; c < n ; c++ ) {
        if ( c <= 1 ){ i = c;}
        else{i = a + b;a = b;b = i;}
        printf("%d ",i);
    }
}
//Enter the number of terms:9
//First 9 terms of Fibonacci series are : 0 1 1 2 3 5 8 13 21
