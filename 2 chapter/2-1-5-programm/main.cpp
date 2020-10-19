#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, midArif, midGeom;
    printf("Put 3 numbers \n");
    printf("1: ");
    scanf("%f", &a);
    printf("2: ");
    scanf("%f", &b);
    printf("3: ");
    scanf("%f", &c);

    midArif = (a + b + c) / 3;
    midGeom = pow((a * b * c), 1./ 3);
    printf("Average: %f \n", midArif);
    printf("Geometric mean: %f", midGeom);
    return 0;
}
