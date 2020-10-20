#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float d1, d2, S, P;
    printf("Insert diagonal D1: ");
    scanf("%f", &d1);
    printf("Insert diagonal D2: ");
    scanf("%f", &d2);
    S = (d1 * d2) / 2;
    P = 4 * sqrt(pow(d1/ 2, 2) + pow(d2 / 2, 2));
    printf("Area: %f\n Perimetr: %f", S, P);
    return 0;
}
