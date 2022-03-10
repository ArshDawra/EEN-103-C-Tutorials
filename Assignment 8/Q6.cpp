#include<iostream>
using namespace std;
//fibonacci series
//friend functions
class fibonacci
{
private:
int n;
int c1=0;
int c2=1;
public:
	void setvalue(int n)
	{
		this->n=n;
	}
int operator+()
{
return (c1+c2);
}
friend void fibbfunc(fibonacci);	
};
void fibbfunc(fibonacci h)
{
	cout<<h.c1<<" "<<h.c2<<" ";
    for(int i=3;i<=h.n;i++)
    {
	int c3=h.c1+h.c2;
	cout<<c3<<" ";
	int f=h.c2;
	h.c2=c3;
	h.c1=f;	
	}
}

int main()
{
	int n;
	cout<<"Enter number of elements in series : "<<endl;
	cin>>n;
	fibonacci b1;
	b1.setvalue(n);
	fibbfunc(b1);
}
