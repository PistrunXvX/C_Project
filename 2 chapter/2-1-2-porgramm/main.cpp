#include <iostream>
#include <stdio.h>
#include <math.h>

#define PI 3.14

using namespace std;

int main()
{
    // formula
    // a = c ⋅ cos(β)
    // b = c ⋅ cos(α)
    float a, b, c, S, aAngel, bAngel;
    printf("Insert A angel ");
    scanf("%f", &aAngel);
    printf("Insert C hypotenuse ");
    scanf("%f", &c);
    b = c / cos(aAngel);
    a = sqrt(pow(c, 2) + pow(b, 2));
    S = (a * b) / 2;
    bAngel = 180 - 90 - aAngel;
    printf("Area triangle: %f \n", S);
    printf("Angel has %f", bAngel);

    return 0;
}
