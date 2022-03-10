#include<iostream>
using namespace std;
int main()
{
    double fahrenheit;
    double celsius;
    cout<<"enter fahrenheit value"<<endl;
    cin>>fahrenheit;
    cout<<"enter celsius value"<<endl;
    cin>>celsius;
    //converting fahrenheit into celsius
    double celsius1=((fahrenheit-32)*5)/9;
    //converting cesius into fahrenheit
    double fahrenheit1=(celsius*9)/5+32;
    cout<<celsius1<<endl;
    cout<<fahrenheit1;
}
