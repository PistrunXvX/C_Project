#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float a, b, S, R, P, D;
    printf("Insert a: ");
    scanf("%f", &a);
    printf("Insert b: ");
    scanf("%f", &b);
    a = abs(a);
    b = abs(b);
    S = a + b;
    R = a - b;
    P = a * b;
    D = a / b;
    printf("Summ: %f \nDifferent: %f \nCommutate: %f \n Quotite: %f", S, R, P, D);
    return 0;
}
