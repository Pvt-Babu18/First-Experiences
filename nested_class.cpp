#include <iostream>
#include<stdlib.h>
using namespace std;


class student
{
    int roll;
    char name [30];
    public:
    void enter()
    {
        cout<<"Enter the name and the roll no:\n";
        gets(name);
        cin>>roll;

    }
    void display()
    {
        cout<<endl<<"Name is "<<name<<" and the roll no is: "<<roll<<endl;

    }
    class date
    {
        int day, month, year;
        public:
        void get_data();
        void show_data();
    };
};

void student::date::get_data()
{
cout<<"Enter your birth date:\n";
cin>>day>>month>>year;
}
void  student::date::show_data()
{
    cout<<"Your date of birth is: "<<day<<"-"<<month<<"-"<<year;
}



int main()
{
    system("cls");
    student ram;
    student::date d1;
    ram.enter();
    d1.get_data();
    ram.display();
    d1.show_data();
    return 0;
}