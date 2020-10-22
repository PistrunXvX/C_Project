#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2, z1, z2, AB;
    printf("Insert A: x1 ");
    scanf("%f", &x1);
    printf("Insert A: y1 ");
    scanf("%f", &y1);
    printf("Insert A: z1 ");
    scanf("%f", &z1);
    printf("Insert A: x2 ");
    scanf("%f", &x2);
    printf("Insert A: y2 ");
    scanf("%f", &y2);
    printf("Insert A: z2 ");
    scanf("%f", &z2);
    AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("AB: %f", AB);
    return 0;
}
