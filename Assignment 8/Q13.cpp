#include<iostream>
#include<cmath>
using namespace std;
class fixDeposit
{
protected:
int accno;// account number
protected:
double amount;// principal amount
public:
fixDeposit(int a, double p)
{
accno = a;
amount = p;
}
public:
virtual double interest()
{
cout << "The member function in fixDeposit";
return 0;
}
public:
void update(double d)
{
amount += d;
}
public:
virtual void display()
{
cout<<"The member function in fixDeposit";
}
};
class SIdeposit: public fixDeposit
{
public:
double rateinterest;
int timeyears;	
double interestSI;
SIdeposit(int a,double b,double c,int d):fixDeposit(a,b)
{
	rateinterest=c;
	timeyears=d;
}
double interest()
{
    interestSI=(amount*rateinterest*timeyears)/100;
	return interestSI;
}
void display()
{
	update(interestSI);
    cout<<"Updated Amount: "<<amount<<endl;
}
};
class CIdeposit: public fixDeposit
{
public:
double rateinterest;
int timeyears;
double interestCI;	
CIdeposit(int a,double b,double c,int d):fixDeposit(a,b)
{
	rateinterest=c;
	timeyears=d;
}
double interest()
{
	interestCI=amount*(pow(1+(rateinterest/100),timeyears))-amount;
	return interestCI;
}
void display()
{
	update(interestCI);
    cout<<"Updated Amount: "<<amount<<endl;
}
};
int main()
{
	cout<<"Enter account number: ";
	int a;
	cin>>a;
	cout<<"Enter principle amount: ";
	int b;
	cin>>b;
	cout<<"Enter yearly rate of interest for SI: ";
	int c1;
	cin>>c1;
	cout<<"Enter time period of deposit in number of years: ";
	int d1;
	cin>>d1;
	cout<<"Enter yearly rate of interest for CI: ";
	int c2;
	cin>>c2;
	cout<<"Enter time period of deposit in number of years: ";
	int d2;
	cin>>d2;
	SIdeposit u1(a,b,c1,d1);
	fixDeposit * SIptr;
	SIptr=&u1;
	cout<<"The SI is: "<<SIptr->interest()<<endl;
	SIptr->display();
	CIdeposit u2(a,b,c2,d2);
	fixDeposit * CIptr;
	CIptr=&u2;
	cout<<"The CI is: "<<CIptr->interest()<<endl;
	CIptr->display();
}
