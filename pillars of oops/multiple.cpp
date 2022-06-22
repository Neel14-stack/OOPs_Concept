#include<iostream>
using namespace std;

class a{

    public:
    void print()
    {
        cout<<"this is class a:"<<endl;
    }
};

class b{
    public:
    void print()
    {
        cout<<"this is class b:"<<endl;
    }
};

class c:public a, public b{
    public:
    void print()
    {
        cout<<"this is class c"<<endl;
    }
};
int main()
{
    c ob;
    ob.print();

    /////////////////////////////
    //implementing concept of scope resolution//

    ob.a::print();
    ob.b::print();
    ob.c::print();

    return 0;
}