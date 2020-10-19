#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, s, p;
    cout << "Insert length sides triangle" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    p = a + b + c;
    s = sqrt(p / 2 * (p / 2 - a) * (p / 2 - b) * (p / 2 - c));
    cout << "Perimetr triangle has " << p << endl;
    cout << "His area has " << s << endl;
    return 0;
}
