#include<iostream>
using namespace std;

class a{

    public:
    void print()
    {
        cout<<"this is class a:"<<endl;
    }
};

class b:public a{
    public:
    void output()
    {
        cout<<"this is class b:"<<endl;
    }
};

class c:public b{
    public:
    void out()
    {
        cout<<"this is class c"<<endl;
    }
};
int main()
{
    c ob;
    ob.out();
    ob.output();
    ob.print();
    return 0;
}