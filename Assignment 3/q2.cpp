#include<iostream>
#include<string>
using namespace std;
int main()
{
  cout<<"Enter the String";
  string newstring;
  cin>>newstring;
  string boomstring="";
  string okaystring="";
  int n= newstring.length();
  for(int i=0;i<n;i++)
  {
char c=newstring[i];
int m=(int)c;
if((m>=97)&&(m<=122))
{
  boomstring=boomstring+c;  
}
else 
{
    int m=(int)c;
    m=m+32;
    char f=(char)m;
    boomstring=boomstring+f;  
}}
for(int i=0;i<n;i++)
  {
char c=newstring[i];
int m=(int)c;
if((m>=65)&&(m<=90))
{
  okaystring=okaystring+c;  
}
else 
{
    int n=(int)c;
    n=n-32;
    char f=(char)n;
    okaystring=okaystring+f;  
}}
cout<<boomstring<<endl;
cout<<okaystring;
}
