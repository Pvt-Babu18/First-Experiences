#include<iostream>

using namespace std;


int enter(int , int )
{
    int x,y;
    cout<<"Enter:\n";
    cin>>x>>y;
}
int sum(int , int )
{
    int x,y;
    int p=x+y;
    cout<<"Sum="<<p;
    return p;
}
int main()
{
    system("cls");
    int x,y;
    enter(x,y);
    sum(x,y);
    return 0;
}