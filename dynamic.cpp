#include<iostream>
using namespace std;

class Hero{
 
    
    private:
    int age;
    bool gender;
    char address[20];

    public:
    char first_name;
    char last_name;

    void public_details()
    {
       age = 25;
       gender = false;
       cout<<"Yr age is "<< age<<endl;
       cout<<"yr gender is "<< gender;

    }


};

int main()
{
    // Dynamic object creation 
    Hero *b = new Hero;
    b->first_name = 'N';
    b->last_name = 'R';
    cout<<"First name is "<<b->first_name<<" Last name is "<<b->last_name<<endl;
    b->public_details();
    return 0;

    // Hero paul;
    // paul.first_name = 'Neel';
    // paul.last_name = 'Roy';
    // paul.public_details();
    // return 0;

}