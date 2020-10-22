#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float a, b, P, S;
    printf("Insert A: ");
    scanf("%f", &a);
    printf("Insert B: ");
    scanf("%f", &b);
    S = a * b;
    P = 2 * (a + b);
    printf("Area: %f\n Perimetr: %f", S, P);
    return 0;
}
