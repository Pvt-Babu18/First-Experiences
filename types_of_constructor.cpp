#include <iostream>

using namespace std;

class student
{
    int id;

public:
    student()
    {
    }
    student(int a) : id(a) /*    ----> student(int a){
                                           id=a;
                                       }       */
    {
    }
    student(student &s)
    {
        id = s.id;
    }
    int display()
    {
        return (id);
    }
};
int main()
{
    system("cls");
    student s1(200);
    student s2(s1);
    student s3 = s2;
    student s4 = s1;

    cout << "Id of student s1=" << s1.display()<<endl;
    cout << "Id of student s2=" << s2.display()<<endl;
    cout << "Id of student s3=" << s3.display()<<endl;
    cout << "Id of student s4=" << s4.display()<<endl;

    return 0;
}