#include<iostream>

using namespace std;

int area(int a, int b )
{
    int  area;
    area=a*b;
    return area;
}
int area(int y , float x)
{

    float area;
    area=y*x;
    return area;

}
int main()
{
    system("cls");
    int a,b,y,z;
    float x,m;
    cout<<"Enter the required values:";
    cin>>a>>b>>y>>x;
    z=area(a,b);
    m=area(y,x);
 
    system("cls");
    cout<<"The area of rectangle 1 is "<< z<<endl;
    cout<<"The area of rectangle 2 is "<< m<<endl;
    return 0;
}