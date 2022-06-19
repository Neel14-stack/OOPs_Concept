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
       cout<<"Yr age is "<< age;
       cout<<"yr gender is "<< gender;

    }


};

int main()
{
    Hero paul;
    paul.first_name = 'Neel';
    paul.last_name = 'Roy';
    paul.public_details();
    return 0;

}