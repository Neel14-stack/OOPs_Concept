#include<iostream>
using namespace std;

class Hero{
 
    
    private:
    int health;
    int power;

    public:
    char level;

    // Hero(){
    //     cout<<"Constructor is created"<<endl;
    // }

    //Parametrized constructor
    Hero( int health)
    {
        this->health  = health;
    }

    void print()
    {
        cout<<"printing the health data "<<endl<<this->health;
    }




};

int main()
{
    Hero paul(74);
    paul.print();
    
    return 0;

}