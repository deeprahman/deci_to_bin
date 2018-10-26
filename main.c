/*
This program converts a decimal integer to binary numeral
*/
#include <stdio.h>

#define MAX 20

void main(void){
    int num, rem,j, i = 0;
    int bin[20];
    //Enter the integer
    printf("\nEnter an integer: ");
    scanf("%d",&num);
    while(num != 0){
        rem = num % 2;
        num = num / 2;
        bin[i++] = rem;
    }
    for(j = i-1; j >= 0; j--){
        printf("%d",bin[j]);
    }
}
