/*
Desenvolver um programa para determinar o valor de S, pela seguinte série:
S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36 ... - 10/100
*/

#include<stdio.h>

int main() {

    int x = 1;
    float S = 0.0;

    while (x > 0 && x <= 10)
    {
        if (x % 2 == 1) {
            S = S + ((float)x / (x * x));
        } else {
            S = S - ((float)x / (x * x));
        }
        
        x++;
    }
    
    printf("O resultado de S e: %f", S);

    return 0;
}
