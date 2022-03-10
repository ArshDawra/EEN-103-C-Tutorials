#include<iostream>
using namespace std;
int main()
{
    for(int i=65;i<=90;)
    {
        int count=1;
        while(count<=5)
        {
            char c=(char)i;
            cout<<c<<"\t";
            count++;
            i++;
        }
        cout<<endl;
    }}
