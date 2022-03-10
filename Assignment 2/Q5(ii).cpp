#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //let the quadratic equation be ax^2+bx+e=0
    double a;
    double b;
    double e;
    cin>>a>>b>>e;
    double root1;
    double root2;
    double d=(b*b)-4*a*e;
    char r;
    double sqd;
   
if(d==0)
{
    r='1';
}
else if(d>0)
{
    r='2';
}
else
{
    r='3';
}
switch(r)
{
    case '1':
    cout<<"Roots are equal and are equal to:"<<endl;
    cout<<((-b)/(2*a));
    break;
    case '2':

         sqd=sqrt(d);
        root1=((-b)+sqd)/(2*a);
        root2=((-b)-sqd)/(2*a);
        cout<<"Roots are:"<<endl;
        cout<<root1<<root2;
        break;
        case '3':

        d=(-1)*d;
        double sqd1=sqrt(d);
        double real1=(-b)/(2*a);
        double imag1=sqd1/(2*a);
        cout<<"Roots are:"<<endl;
        cout<<real1;
        cout<<"+"<<imag1<<"i"<<endl;
        cout<<real1;
        cout<<"-"<<imag1<<"i";
        break;
    }
    return 0;
    }

