#include<iostream>

using namespace std;

class a{

    public:
    void data()
    {
        cout<<"this is an empty function: "<<endl;
    }

    void data(int a){
        cout<<"this function will show a data: "<<a<<endl;
    }

    void data(int a, int b)
    {
        cout<<"this function will show u a 2 numbers: "<<a<<"   "<<b<<endl;

    }
    char data(char a)
    {
        cout<<"char data is showing: "<<a<<endl;
        return a;
    }
};

int main()
{
    a ob;
    ob.data();
    ob.data(5);
    char x = ob.data('a');
    ob.data(5,10);


    return 0;

}