#include<iostream>
using namespace std;
class oddNum
{
public:
	int n;
void setValue()
    {
	cout<<"Enter number of odd numbers you want to display: ";
	cin>>n;
	}	
};
class sum
{
public:
int sum;
void sumcalc(int n)
{
	sum=0;
	int f=1;
for(int i=1;f<=n;i=i+2)
    {
	sum=sum+i;
	f++;
	}
}
};
class display
{
public:
void displayNum(int n)
{
int f=1;
for(int i=1;f<=n;i=i+2)
    {
	cout<<i<<" ";
	f++;
	}
}	
};
class derived:public sum, public display,public oddNum
{
public:
void sumdisplay(void)
{
cout<<"The sum of odd integers upto "<<n<<" is: "<<sum<<endl;	
}	
};
int main()
{
derived a1;
a1.setValue();
int v=a1.n;
a1.sumcalc(v);
a1.sumdisplay();
a1.displayNum(v);
}
