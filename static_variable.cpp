#include <iostream>
using namespace std;
class item
{
    static int count;
    float price;

public:
    void get_data(float a)
    {
        price = a;
        count++;
    }
    void show_count()
    {
        cout << "count=" << count << endl;
    }
};
int item::count;
int main()
{
    system("cls");
    float a;
    item i1, i2, i3;
    i1.show_count();
    i2.show_count();
    i3.show_count();
    i1.get_data(a);
    i2.get_data(a);
    i3.get_data(a);
    cout << "After reading data" << endl;
    i1.show_count();
    i2.show_count();
    i3.show_count();
    return 0;
}