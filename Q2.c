//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient
#include <stdio.h>
int main() {
    int a, b;
    //input two numbers 
    scanf("%d %d" , &a, &b);
     
    //perform calculations 
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b;   
     
    //display results
    printf("sum=%d, diff=%d, product=%d, quotient=%d\n" , sum, diff, product, quotient);
    return 0;
}