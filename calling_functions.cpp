#include<iostream>


using namespace std;

void enter()
{
    int a,b;
    cout<<"Enter the values of a & b: \n";
    cin>>a>>b;
}
void display()
{
    int a,b;
    cout<<"The values of a is "<<a<< "and b is "<<b;
}


int main()
{
    system ("cls");
    int a,b;
    enter();
    display();
    return 0;

}