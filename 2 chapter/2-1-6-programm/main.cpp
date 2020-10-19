#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float a, b ,c, P;
    printf("Insert leg A: ");
    scanf("%f", &a);
    printf("Insert leg B: ");
    scanf("%f", &b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    P = a + b + c;
    printf("Hypotenuse has: %f \n", c);
    printf("Perimetr has: %f \n", P);
    return 0;
}
