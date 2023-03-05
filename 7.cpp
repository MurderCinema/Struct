#include <iostream>
#include <cmath>

using namespace std;
struct Dat
{
    int diap;
    int pogr;
    int speed;
};

int main()
{
    Dat dat1 = {1, 2, 3};
    Dat dat2 = {3, 2, 1};
        if (dat1.speed < dat2.speed)
            cout << "Dat 1 samiy medlenniy";
        else
            cout << "Dat 2 samiy medlenniy";
        //cout << "Time1 - " << kompl1.a << " " << kompl1.i << endl
             //<< "Time2 - " << kompl2.hours << " " << kompl2.minutes << endl;
    return 0;
}
