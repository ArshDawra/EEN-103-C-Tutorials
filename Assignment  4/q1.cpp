#include<iostream>
using namespace std;
int prime(int i)
{
   int check=1;
    
    for (int j = 2;(j*j)<=i; j++)
    {
        if (i % j== 0)
        {
           check=0;
        }
    }
    return check;
}
int main()
{
cout<<"Enter two numbers";
int a;
int b;
cin>>a;
cin>>b;
for(int i=a+1;i<=b;i++)
    {
int m=prime(i);
if((m==1)&&(i!=1))
{
    cout<<i<<" ";
}
}}