#include<iostream>
using namespace std;

class Hero{
 
    
    private:
    int health;
    int power;

    public:
    char level;

    Hero(){
        cout<<"Constructor is created";
    }

    // void public_details()
    // {
    //    age = 25;
    //    gender = false;
    //    cout<<"Yr age is "<< age;
    //    cout<<"yr gender is "<< gender;

    // }


};

int main()
{
    Hero paul;
    paul.first_name = 'Neel';
    paul.last_name = 'Roy';
    paul.public_details();
    return 0;

}