#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float a, P, S, d;
    printf("Insert side: ");
    scanf("%f", &a);
    S = pow(a, 2);
    P = a * 4;
    d = sqrt(2) * a;
    printf("Area: %f\nPerimetr: %f\n Diagonale: %f", S, P, d);
    return 0;
}
