#include <iostream>
using namespace std;
class b;
class a
{
    int x, y;

public:
    void enter()
    {
        cout<<"enter the values of x and y:\n";
        cin >> x >> y;
    }
    friend class b;
};
class b
{
public:
    void display(a l)
    {
        cout << "x=" << l.x << endl;
        cout << "y=" << l.y << endl;
    }
};
int main()
{
    system("cls");
    a obj1;
    b obj2;
    obj1.enter();
    obj2.display(obj1);
    return 0;
}