#include<iostream>
using namespace std;

class a{

    public:
    void print()
    {
        cout<<"this is class a:"<<endl;
    }
};

class b: public a{
    public:
    void print()
    {
        cout<<"this is class b:"<<endl;
    }
};

class c:public a{
    public:
    void print()
    {
        cout<<"this is class c"<<endl;
    }
};

class d:public b, public c{
    public:
    void print()
    {
        cout<<"this is class d: "<<endl;
    }
};

int main()
{
    d ob;
    ob.print();
    ob.b::print();
    ob.c::print();
    //ob.a::print();

    return 0;
}