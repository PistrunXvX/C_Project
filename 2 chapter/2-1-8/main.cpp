#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float a, b, S, R, P, d;
    printf("Insert A: ");
    scanf("%f", &a);
    printf("Insert B: ");
    scanf("%f", &b);
    a *= a;
    b *= b;
    S = a + b;
    R = a - b;
    P = a * b;
    d = a / b;
    printf("Summ %f \n", S);
    printf("Difference: %f \n", R);
    printf("Composition: %f \n", P);
    printf("Quotient: %f", d);
    return 0;
}
