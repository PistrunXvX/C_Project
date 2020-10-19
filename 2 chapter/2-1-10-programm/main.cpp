#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2, d;
    printf("Insert coordinat x1: ");
    scanf("%f", &x1);
    printf("Insert coordinat x2: ");
    scanf("%f", &x2);
    printf("Insert coordinat y1: ");
    scanf("%f", &y1);
    printf("Insert coordinat y2: ");
    scanf("%f", &y2);
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Length: %f", d);
    return 0;
}
