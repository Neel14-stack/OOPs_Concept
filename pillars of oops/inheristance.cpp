#include<iostream>
using namespace std;

class Roy{

    char gender;

    public:
    int height;
    int weight;

};

class neel: public Roy{
    public:
    int level;

    void get_data(int a,int b)
    {
        this->height = a;
        this->weight =b;
        cout<<"height is: "<<endl<<this->height<<"weight is: "<<endl<<this->weight<<endl;

    }

};

int main()
{
    neel n1;
    n1.level = 5;
    cout<<"the level is: "<<endl<<n1.level<<endl;
    n1.get_data(170,75);
    return 0;

}