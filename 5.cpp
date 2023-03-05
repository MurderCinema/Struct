#include <iostream>

using namespace std;
struct Robot
{
    float gabarit;
    float mass;
    float speed;
};

int main()
{
    Robot robot1 = {1, 2, 3};
    Robot robot2 = {3, 2, 1};
        if (robot1.speed > robot2.speed)
            cout << "Robot 1 samiy bistry";
        else
            cout << "Robot 2 samiy bistry";
    return 0;
}
