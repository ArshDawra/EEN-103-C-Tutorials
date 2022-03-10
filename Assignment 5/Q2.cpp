#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter the elements of Array";
    for(int i=0;i<10;i++)
    {
        int c;
        cin>>c;
        arr[i]=c;
    }
    int c1=0,c2=0,c3=0,c4=0;
    for(int f=0;f<10;f++)
    {
        int c=arr[f];
        int m;
        int n=(-1)*c;
        m=(c>0)?c:n;
        if(c>0)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        if(m%2==0)
        {
            c3++;
        }
        else
        {
            c4++;
        }
    }
    cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4;
}