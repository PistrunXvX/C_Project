#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float P, a, d, S;
    printf("Insert perimetr: ");
    scanf("%f", &P);
    a = P / 4;
    d = (P * sqrt(2)) / 4;
    S = pow(a, 2);
    printf("Side: %f\n Diagonale: %f\n Area: %f", a, d, S);

    return 0;
}
