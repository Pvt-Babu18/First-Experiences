#include <iostream>
// #include <time.h>
#include <math.h>
using namespace std;
class time
{
    int hour, mins;

public:
    void get_time(int h, int m)
    {
        hour = h;
        mins = m;
    }
    void display()
    {
        cout << "There are " << hour << " hours and " << mins << " minutes.";
    }
    void sum(time t1, time t2)
    {
        mins = t1.mins + t2.mins;
        hour = mins / 60;
        mins = mins % 60;
        hour = hour + t1.hour + t2.hour;
    }
};
int main()
{
    system("cls");
    time T1, T2, T3;
    T1.get_time(8, 50);
    T2.get_time(2, 40);
    T3.sum(T1, T2);
    T3.display();
    return 0;
}