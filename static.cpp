#include<iostream>
using namespace std;

class Hero{
    public:
    static int level;
};

int Hero::level = 70;

int main()
{
    cout<<Hero::level<<endl;
    return 0;
}