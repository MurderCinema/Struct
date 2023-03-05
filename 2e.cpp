#include <iostream>
#include <cmath>

using namespace std;
struct KC
{
    int a;
    int b;
};

int main()
{
    int z3, z4;
    KC z1 = {1, 2};
    KC z2 = {3, 4};
    z3 = ((z1.a * z2.a)-(z1.b * z2.b));
    z4 = ((z1.a * z2.b)+(z1.b * z2.a));
    cout << z3 << " + i" << z4;
    return 0;
}
