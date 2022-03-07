#include<iostream>
using namespace std;

class mango;
class apple
{
        int x;
        public:
        void get_data1()
        {
            cout<<"Enter the values of x:\n";
            cin>>x;
        }
        friend void add(apple , mango);

};

        class mango
        {
            int y;
            public:
            void get_data2()
            {
                cout<<"Enter the values of y:\n";
                cin>>y;
            }
        friend void add(apple , mango);
        };
        
                void add(apple a1, mango m1)
                {
                    int sum=a1.x+m1.y;
                    cout<<"Sum= "<<sum;
                }
        int main ()
        {
            system("cls");
            apple obj1;
            mango obj2;
            obj1.get_data1();
            obj2.get_data2();
            add (obj1, obj2);
            return 0;

        }
