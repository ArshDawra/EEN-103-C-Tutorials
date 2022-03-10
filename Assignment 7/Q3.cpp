#include<iostream>
using namespace std;
struct data1
{
    int a,b;
};
//take value inside
int main()
{
   data1 s1;
   data1 s2; 
   data1 * ptr1=&s1;
   data1 * ptr2=&s2;
   cout<<"Enter first integer: ";
   cin>>(*ptr1).a;
   cout<<"Enter second integer: ";
   cin>>(*ptr2).b;
   int sum=(*ptr1).a+(*ptr2).b;
   cout<<endl<<sum;
   return 0;
}