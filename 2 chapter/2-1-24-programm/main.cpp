#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float y, x;
    printf("Insert x: ");
    scanf("%f", &x);
    y = (3 / 2) * (pow(x + 3, 4)) - (1 / 5) * (pow(x - 1, 5));
    printf("Y = %f", y);
    return 0;
}
