#include<iostream>
using namespace std;

class Hero{
 
    
    private:
    int health;
    int power;

    public:
    char level;

    Hero(){
        cout<<"Constructor is created"<<endl;
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
    //static allocation
    Hero paul;
    
    //dynamic allocation
    Hero *b = new Hero;


/*     paul.first_name = 'Neel';
    paul.last_name = 'Roy';
    paul.public_details(); */
    return 0;

}