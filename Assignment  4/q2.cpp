#include<iostream>
using namespace std;
int check(string a)
{
    int m;
    if(a=="A+")
    {
 m=10;
    }
    if(a=="A")
    {
 m=9;
    }
    if(a=="B+")
    {
 m=8;
    }
    if(a=="B")
    {
 m=7;
    }
    if(a=="C+")
    {
 m=6;

    }
    if(a=="C")
    {
 m=5;
    }
    if(a=="D")
    {
 m=4;
    }
    if(a=="F")
    {
 m=0;
    }
    return m;
}
double CGPA(string a,string b,string c,string d,string e)
{
    double sum=0;
    int m1=check(a);
    int m2=check(b);
    int m3=check(c);
    int m4=check(d);
    int m5=check(e);
    sum=(m1+m2+m3+m4+m5)/5.0;
return sum;
}
int main()
{
cout<<"Enter credits of subjects";
string a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
double cgpa=CGPA(a,b,c,d,e);
cout<<cgpa;

}