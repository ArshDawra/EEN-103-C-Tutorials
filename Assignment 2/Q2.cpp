#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    //swapping
    int c=a;
    a=b;
    b=c;
    //printing swapped values
    cout<<a<<endl<<b;
}

