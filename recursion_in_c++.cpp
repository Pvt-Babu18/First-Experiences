#include<iostream>

using namespace std;

int fact( int n)
{
    if(n==0)
    return 1;
    else
    return (n* fact (n-1));
}
void enter()
{
    int n;
        cout<<"Enter the number whose factorial is to be calculated:\n";
    cin>>n;
}
void display()
{
    int n;

    cout<<"The factorial of "<<n<<" is "<<fact(n);
}

int main()
{
    system ("cls");
    enter();
    display();
    return 0;


}