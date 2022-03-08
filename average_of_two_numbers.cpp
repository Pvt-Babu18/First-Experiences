#include <iostream>

using namespace std;

int main()
{
    system("cls");
    float x, y, sum, avg;

    cout << "Enter two numbers:\n";

    cin >> x >> y;

    sum = x + y;
    
    avg = sum / 2;
    
    cout << "The average of two numbers is:" << avg << endl;
    
    return 0;
}