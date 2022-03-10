#include<iostream>
using namespace std;

int* findAddress(int arr[],int n,int m)
{
  int *ptr1=&arr[0];
  int f=0;
for(int h=0;h<n;h++)
{
    ptr1=ptr1+1;
    if(*(ptr1)==m)
    {
        f=1;
       break;
    }
}
if(f==1)
    {
        return ptr1;
    }
    else
    {
        return NULL;
    }
}
int main()
{
    int x;
    int n;
    cout<<"Enter number of elements in the array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element"<<" "<<i<<endl;
        int c;
        cin>>c;
        arr[i]=c;
        cout<<endl;
    }
    cout<<"Enter the integer whose address needs to be printed";
    cin>>x;
    cout<<findAddress(arr,n,x);

}