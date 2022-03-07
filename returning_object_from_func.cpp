#include<iostream>

using namespace std;
class cordinate
{
    int x,y;
    public:
    void input()
    {
        cout<<"Enter the values of x and y:";
        cin>>x>>y;
    }
    void show()
    {
        cout<<x<<endl<<y<<endl;
    }
    friend cordinate sum(cordinate , cordinate);


};
cordinate sum(cordinate a, cordinate b)
{
    cordinate z;
    z.x=a.x+b.x;
    z.y=a.y+b.y;
    return z;    
}
int main()
{
    system("cls");
    cordinate i,j,k;
    i.input();
    j.input();
    k=sum(i,j);
    // i.show();
    // j.show();
    k.show();
    return 0;
}