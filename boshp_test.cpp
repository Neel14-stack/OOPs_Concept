#include<iostream>
using namespace std;

int main()
{
    cout<<"array size: "<<endl;
    int a,b;
    cin>>a;
    cout<<"enter the array: "<<endl;
    int c[a];
    for(int i=0;i<a;i++)
    {
        cin>>c[i];

    }
    cout<<"enter the target value: "<<endl;
    cin>>b;
    int count = 0;
    for(int i=0;i<a;i++)
    {
        if(c[i]<b)
        {
            count += 1;
        }

    }
    cout<<"required output is: "<<count<<endl;
    return 0;
}