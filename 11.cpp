#include <iostream>

using namespace std;
struct Robot
{
    float vvint;
    float rvint;
    float ktag;
};

int main()
{
    float tvint;
    Robot robot1 = {1, 2, 3};
        tvint = robot1.ktag * robot1.rvint * robot1.vvint;
        cout << "Tyaga vinta = " << tvint;
    return 0;
}
