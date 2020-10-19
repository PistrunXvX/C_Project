#include <iostream>
#include <stdio.h>
#include <math.h>

#define PI 3.14

using namespace std;

int main()
{
    float L, R, S;
    printf("Insert length circle: ");
    scanf("%f", &L);
    R = L / (2 * PI);
    S = (pow(L, 2)) / (4 * PI);
    printf("Radius: %f \n", R);
    printf("Area: %f", S);
    return 0;
}
