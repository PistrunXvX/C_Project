#include <iostream>
#include <stdio.h>
#include <math.h>

#define PI 3.14

//#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main()
{
    // formula Hypotenuse √(a^2+b^2)

    float a, b, c, aAngel, bAngel;
    printf("Insert legs triangle \n");
    printf("Insert a: ");
    scanf("%f", &a);
    printf("Insert b: ");
    scanf("%f", &b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    aAngel = (sin(a/ c) * 180) / PI;
    bAngel = 180 - 90 - aAngel;
    printf("Hypotenuse has c=%f \n", c);
    printf("Angel A:%f \n" ,aAngel);
    printf("Angel B:%f", bAngel);
    return 0;
}
