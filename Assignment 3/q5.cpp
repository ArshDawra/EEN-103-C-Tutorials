#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter first string";
    string first;
    cin>>first;
    cout<<"Enter second string";
    string second;
    cin>>second;
    int n1=first.length();
    int n2=second.length();
    if(n1!=n2)
    {
 cout<<"Strings not equal";
    }
    else
    {
    int j=0;
    int m=1;
    for(int i=0;i<n1;i++,j++)
    {
        char c=second[j];
        char d=first[i];
        if(c==d)
        {
            m++;
        }
      
}
if(m==n1+1)
{
    cout<<"strings are equal";
}
else
{ 
    cout<<"strings not equal";
}
}
}


