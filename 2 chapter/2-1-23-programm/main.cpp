#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float a1, a2, a3, a4, a5, arifMid, geoMid;
    printf("Insert a1: ");
    scanf("%f", &a1);
    printf("Insert a2: ");
    scanf("%f", &a2);
    printf("Insert a3: ");
    scanf("%f", &a3);
    printf("Insert a4: ");
    scanf("%f", &a4);
    printf("Insert a5: ");
    scanf("%f", &a5);
    arifMid = (a1 + a2 + a3 + a4 + a5) / 5;
    geoMid = pow(a1 * a2 * a3 * a4 * a5, 1./5);
    printf("Arifmetic: %f\n Geometry: %f", arifMid, geoMid);
    return 0;
}
