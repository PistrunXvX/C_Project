#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float A, B, C, swap, swap2;
    printf("Insert A: ");
    scanf("%f", &A);
    printf("Insert B: ");
    scanf("%f", &B);
    printf("Insert C: ");
    scanf("%f", &C);
    swap = A;
    swap2 = C;
    A = B;
    B = swap2;
    C = swap;
    printf("A: %f\n B: %f\nC: %f", A, B, C);
    return 0;
}
