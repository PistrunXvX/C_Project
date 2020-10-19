#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float d, S, P;
    printf("Insert diagonal rectangel: ");
    scanf("%f", &d);
    S = pow(d, 2) / 2;
    P = 2 * d * sqrt(2);
    printf("Area rectangel: %f \n", S);
    printf("Perimetr rectangel: %f", P);
    return 0;
}
