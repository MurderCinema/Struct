#include <iostream>

using namespace std;
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    Time time1 = {1, 59, 59}; // время 1
    Time time2 = {1, 2, 2}; // время 2
    if (time1.minutes > 60)
        time1.hours = time1.hours + 1;
    if (time2.minutes > 60)
        time2.hours = time2.hours + 1;
   // cout << "1 - " << time1.hours << endl << "2 - " << time2.hours << endl;
    Time time3;
    time3.hours = time1.hours + time2.hours;
    time3.minutes = time1.minutes + time2.minutes;
    time3.seconds = time1.seconds + time2.seconds;
        if (time3.minutes > 60)
            time3.minutes = time3.minutes - 60;
            time3.hours = time3.hours + 1;
        if (time3.seconds > 60)
            time3.seconds = time3.seconds - 60;
                cout << "Time1 - " << time1.hours << " " << time1.minutes << " " << time1.seconds << endl
                     << "Time2 - " << time2.hours << " " << time2.minutes << " " << time2.seconds << endl;
                cout << "Time3 - " << time3.hours << " " << time3.minutes << " " << time3.seconds << endl;
    return 0;
}
