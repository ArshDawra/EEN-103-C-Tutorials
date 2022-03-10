#include<iostream>
using namespace std;
void addition(int a,int b)
{
    int c=a+b;
    cout<<c<<endl;
}
void addition(float a,float b)
{
    float c=a+b;
    cout<<c<<endl;
}
int main()
{
    cout<<"integer or float?: 1 for int and 2 for float";
    int n;
    cin>>n;
    if(n==1)
    {
    cout<<"Enter integer input";
    int a,b;
    cin>>a>>b;
    addition(a,b);
    }
    if(n==2)
    {
    cout<<"Enter floating point numbers";
    float c,d;
    cin>>c>>d;
    addition(c,d);
    }
}