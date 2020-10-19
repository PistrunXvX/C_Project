#include <iostream>
#include <stdio.h>
#include <math.h>

#define PI 3.14

using namespace std;

int main()
{
    float d, L, S;
    printf("Insert diameter circle: ");
    scanf("%f", &d);
    S = (PI * pow(d, 2)) / 4;
    L = d * PI;
    printf("Length circle: %f \n", L);
    printf("Area circle: %f", S);
    return 0;
}
