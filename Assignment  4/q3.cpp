#include<iostream>
using namespace std;
double addition(double a,double b)
{
    double c=(double)(a+b);
    cout<<c;
    return 0;
}
double subtraction(double a,double b)
{
    double c=(double)(a-b);
    cout<<c;
     return 0;
}
double division(double a,double b)
{
    double c=(double)(a/b);
    cout<<c;
     return 0;
}
double multiplication(double a,double b)
{
    double c=(double)(a*b);
    cout<<c;
     return 0;
}
int Functionshowcase(char c)
{
    switch(c)
    {
        case '+':
        return 1;
        break;
        case '-':
     return 2;
        break;
        case '/':
       return 3;
        break;
        case '*':
       return 4;
        break;
    }
   return 0; 
}

int main()
{
    cout<<"what operation?: +,-,/,*";
    char c;
    cin>>c;
    
    cout<<"enter two numbers";
    double a,b;
    cin>>a>>b;
int m=Functionshowcase(c);
switch(m)
{
    case 1:
    addition(a,b);
    break;
    case 2:
    subtraction(a,b);
    break;
    case 3:
     division(a,b);
     break;
     case 4:
     multiplication(a,b);
     break;
}

}