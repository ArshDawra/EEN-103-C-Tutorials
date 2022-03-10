#include<iostream>
using namespace std;
int square(int a)
{
	return a*a;
}
int cube(int b)
{
	return b*b*b;
}
int sum(int(*)(int),int);
int main()
{
	int n;
	cout<<"Enter maximum integer: ";
	cin>>n;
	cout<<"Sum of squares: "<<sum(square,n)<<endl;
	cout<<"Sum of cubes: "<<sum(cube,n);
}
sum(int(*pf)(int),int b)
{
	int sum=0;
	for(int i=0;i<=b;i=i+2)
	{
		sum=sum+(*pf)(i);
	}
	return sum;
}
