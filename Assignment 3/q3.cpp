#include<iostream>
#include<string>
using namespace std;
int main()
{
string firststring;
cout<<"Enter first string";
cin>>firststring;
string secondstring;
cout<<"Enter second string";
cin>>secondstring;
string newstring="";
int n1=firststring.length();
int n2=secondstring.length();
int c1=0;
int c2=0;
while(c1<=n1)
{
    newstring=newstring+firststring[c1];
    c1++;
}
while(c2<=n2)
{
    newstring=newstring+secondstring[c2];
    c2++;
}
cout<<newstring;
}