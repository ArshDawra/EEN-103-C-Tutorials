#include<iostream>
using namespace std;
int add(int x,int y)
{
	int sum=x+y;
	return sum;
}
int multiply(int x,int y)
{
	int prod=x*y;
	return prod;
}
int subtract(int x,int y)
{
	int diff=x-y;
	return diff;
}
int main()
{
	int a,b;
	cout<<"Enter the integers"<<endl;
	cin>>a>>b;
	int(*ptr)(int,int);
	ptr=&add;
	cout<<"Addition: "<<ptr(a,b)<<endl;
	ptr=&multiply;
	cout<<"Multiplication: "<<ptr(a,b)<<endl;
	ptr=&subtract;
	cout<<"Subtraction: "<<ptr(a,b)<<endl;
	//using array of function pointers
	cout<<"Using Array of function pointers: "<<endl;
	int(*ptr1[3])(int,int)={add,multiply,subtract};
	cout<<"Addition: "<<ptr1[0](a,b)<<endl;
	cout<<"Multiplication: "<<ptr1[1](a,b)<<endl;
	cout<<"Subtraction: "<<ptr1[2](a,b)<<endl;	
}
