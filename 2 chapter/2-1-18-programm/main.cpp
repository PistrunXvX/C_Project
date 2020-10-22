#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float P, S, a;
    printf("Insert perimetr: ");
    scanf("%f", &P);
    a = P / 3;
    S = (sqrt(3) / 4) * pow(a, 2);
    printf("Area: %f", S);
    return 0;
}
