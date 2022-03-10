#include<iostream>
#include<string>
using namespace std;
//using multiple inheritance
class decimal
{
public:
int n;	
void setValue(int n)
{
	this->n=n;
}
};
class binary
{
public:
int c;
string str;
void convert(int n)
{
	str="";
    if(n==0)
    {
        str="0";
    }
    else
	{
    while(n>0)
    {
      c=n%2;
        n=n/2;
        if(c==1)
        {
          str="1"+str;  
        }
        else
        {
            str="0"+str;
        }
    }
    }
}
};
class derived: public decimal, public binary
{
public:
void print()
    {
	cout<<"The decimal number was: "<<n<<endl;
	cout<<"The binary conversion of the number is: "<<str<<endl;
	}	
};
int main()
{
	int n;
	cout<<"Enter the decimal number: ";
    cin>>n;
    derived a1;
    a1.setValue(n);
    a1.convert(n);
    a1.print();
    
}
