#include<iostream>
using namespace std;
int func(int n,int m)
{
    if(m<1)
    {
        return 0;
    }
    func(n,m-1);
    cout<<n*m<<'\n';
}
float func(float n,float m)
{
    if(m<1)
    {
        return 0;
    }
    func(n,m-1);
    cout<<n*m<<'\n';
}
int main()
{ int a;
    cout<<"For integer:1; For Float:2";
    cin>>a;
    if(a==1)
    {
    int n,m;
    cout<<"Enter number";
    cin>>n;
    cout<<"Enter number of multiples";
    cin>>m;
    func(n,m);
    } 
     if(a==2)
    {
    float n,m;
    cout<<"Enter number";
    cin>>n;
    cout<<"Enter number of multiples";
    cin>>m;
    func(n,m);
    }
}