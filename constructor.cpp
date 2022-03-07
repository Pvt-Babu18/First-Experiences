#include<iostream>

using namespace std;

class constructor
{
    int a, b;
    public:
    constructor();
    constructor(int , int );

    void display(){
        cout<<"a="<<a<<endl<<"b="<<b<<endl;

    }
};

constructor:: constructor()
{
    a=0;
    b=0;
}
constructor::constructor(int x, int y)
{
        a=x;
        b=y;
}
int main()
{
    system("cls");
    constructor c1,c2;
    constructor c3(2,9), c4(7,3);

    c1.display();
       c2.display();
          c3.display();
             c4.display();
             return 0;
}