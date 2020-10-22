#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, x3, y1, y2, y3, AB, BC;
    printf("Insert A: x1 ");
    scanf("%f", &x1);
    printf("Insert A: y1 ");
    scanf("%f", &y1);
    printf("Insert B: x2 ");
    scanf("%f", &x2);
    printf("Insert B: y2 ");
    scanf("%f", &y2);
    printf("Insert C: x3 ");
    scanf("%f", &x3);
    printf("Insert C: y3 ");
    scanf("%f", &y3);
    AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    printf("AB: %f\n BC: %f", AB, BC);
    return 0;
}
