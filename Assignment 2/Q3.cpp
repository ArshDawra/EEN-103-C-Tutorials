#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<1;    
    }
    else if(n<0)
    {
        cout<<"Factorial doesn't exist";
    }
    else
    {
        int fact=1;
        for(int i=n;i>=1;i--)
        {
            fact=fact*i;
        }
        //printing Factorialcout<<fact;
        cout<<fact;
    }
    }
