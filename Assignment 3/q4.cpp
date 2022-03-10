#include<iostream>
#include<string>
using namespace std;
int main()
{ 
cout<<"Enter String";
string boom;
bool check=true;
cin>>boom;
int n=boom.length();
string boomstring;
for(int i=0;i<n;i++)
  {
char c=boom[i];
int m=(int)c;
if((m>=97)&&(m<=122))
{
     boomstring=boomstring+c;
       }
else 
{  int m=(int)c;
    m=m+32;
    char f=(char)m;
    boomstring=boomstring+f;  
}}
int j;
for(j=0;j<(n/2);j++)
{   char c1=boomstring[j];
    char c2=boomstring[n-1-j];
if(c1!=c2)
{   check= false;
    break;}}
if(check)
{   cout<<"Palindrome";}
else{
    cout<<"not palindrome";
    }
    }