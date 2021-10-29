// This function swaps two number without using the third variable
// Date : 29-10-2021
#include<stdio.h>

int main(){
    // swap two numbers without using the third variable using + and -
    
    int a = 2;
    int b = 3;
    int c = 10;
    int d = 5;
    printf("The values of numbers before swap of a is %d and of b is  %d \n", a, b);
    a = a + b; //a = 5
    b = a - b; //b = 2
    a = a - b; //a = 3
    printf("The values of numbers after swap of a is %d and of b is  %d \n", a , b);

    // swap two numbers without using the third variable using / and *
    printf("The values of numbers before swap of c is %d and of d is  %d \n", c, d);
    c = c / d; //c = 2
    d = c * d; //d = 10
    c = d / c; //c = 5
    printf("The values of numbers after swap of c is %d and of d is  %d", c , d);


  
    
    return 0;
}