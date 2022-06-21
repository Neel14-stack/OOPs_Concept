#include<iostream>
using namespace std;

class a{
    public:
    int x;
};

class b: protected a{

    public:
    void data(int a)
    {
        this->x = a;
        cout<<"data is "<<endl<<this->x;
    }
};

int main()
{
    b b1;
    b1.data(10);
     return 0;

}