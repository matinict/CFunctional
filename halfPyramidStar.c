//program Print Program to print half pyramid using *



#include <stdio.h>

main(void){
    int i, j, rows;
    printf("Enter number of rows: ");scanf("%d",&rows);
    
    for(i=1; i<=rows; ++i) {
        for(j=1; j<=i; ++j) {printf("* ");}
        printf("\n");
    }
    return 0;}
//output
//Enter number of rows: 5
//*
//* *
//* * *
//* * * *
//* * * * *

