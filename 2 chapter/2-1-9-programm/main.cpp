#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float a, b, swap;
    printf("Insert A: ");
    scanf("%f", &a);
    printf("Insert B: ");
    scanf("%f", &b);
    swap = a;
    a = b;
    b = swap;
    printf("Variable A: %f \nVariable B: %f", a, b);
    return 0;
}
