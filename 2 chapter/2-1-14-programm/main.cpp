#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float x, y;
    printf("Insert x: ");
    scanf("%f", &x);

    y = 4 * (pow(x + 1, 3)) + 5 * (pow(x - 1, 5)) + 2;
    printf("Function: %f", y);
    return 0;
}
