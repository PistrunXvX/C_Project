#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float a, b, S, P;
    printf("Insert leg A: ");
    scanf("%f", &a);
    printf("Insert leg B: ");
    scanf("%f", &b);
    S = (a * b) / 2;
    P = a + b + (sqrt(pow(a, 2) + pow(b, 2)));
    printf("Area: %f \nPerimetr: %f", S, P);
    return 0;
}
