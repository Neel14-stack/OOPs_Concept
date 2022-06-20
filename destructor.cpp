#include<iostream>
using namespace std;

class Hero{
    
    public:
    Hero()
    {
        cout<<"constructor called:"<<endl;
    }

    ~ Hero()
    {
        cout<<"destructor called: "<<endl;
    }


};

int main()
{
    //static allocation
    Hero h1;

    //dynamic allocation
    Hero *h2 = new Hero();
    delete h2;



    return 0;

}