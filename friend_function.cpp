#include<iostream>
using namespace std;

class vector
{
    int a[10];
    float avg;
    public:
    void get_data();
    friend void average();



};
void vector::get_data()
{
    for(int i =0; i<10; i++)
    {
        cin>>a[i];
    }
}
void average (vector v)
{
    
    float sum=0.0;
    for (int i=0;i<10;i++)
    {
        sum=sum+v.a[i];
        v.avg=sum/10;
        cout<<"Average="<<v.avg;

    }
}
int main()
{
    vector obj;
    cout<<"Enter 10 integers:";
    obj.get_data();
    average(obj);
    return 0;
}