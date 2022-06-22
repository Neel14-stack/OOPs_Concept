#include<iostream>
using namespace std;

class a{
    public:
    void show()
    {
        cout<<"this is super class function: "<<endl;

    }
};

class b:public a{
    public:
    void show()
    {
        cout<<"this function is used to over riding testing: "<<endl;

    }
};

int main()
{
    b ob;
    ob.show();
    return 0;
}