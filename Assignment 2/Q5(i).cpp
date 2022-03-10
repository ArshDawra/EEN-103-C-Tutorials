#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //let the quadratic equation be ax^2+bx+c=0
    double a;
    double b;
    double c;
    cin>>a>>b>>c;
    double root1;
    double root2;
    double d=(b*b)-4*a*c;
    if(a==0)
    {
        cout<<"Not a Quadratic Equation";
    
    }
    else if(d>=0)
    {
        double sqd=sqrt(d);
        root1=((-b)+sqd)/(2*a);
        root2=((-b)-sqd)/(2*a);
        cout<<"Roots are:"<<endl;
        cout<<root1<<root2;
    }
    else
    {
        d=(-1)*d;
        double sqd=sqrt(d);
        double real=(-b)/(2*a);
        double imag=sqd/(2*a);
        cout<<"Roots are:"<<endl;
        cout<<real;
        cout<<"+"<<imag<<"i"<<endl;
        cout<<real;
        cout<<"-"<<imag<<"i";
    }
    }



