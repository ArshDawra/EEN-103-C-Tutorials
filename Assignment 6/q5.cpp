#include<iostream>
#include<string>
using namespace std;
void replace(char*p1,char* p2)
{
    char c=*p1;
    *p1=*p2;
    *p2=c;
}
int main()
{
    string c;
    cout<<"Enter the string ";
    cin>>c;
    int l=c.length();
    char arr[l];
    char* p1;
    char* p2;
    for(int i=0;i<l;i++)
    {
        arr[i]=c[i];
    }
    for(int i=0;i<l/2;i++)
    {
        p1=&arr[i];
        p2=&arr[l-i-1];
        replace(p1,p2);
    }
     for(int i=0;i<l;i++)
    {
         cout<<arr[i];
    }
   
    return 0;
}