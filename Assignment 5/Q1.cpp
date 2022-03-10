#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter number of elements ";
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        int c;
        cin>>c;
        arr[i]=c;
    }
    //reverse
    for(int f=0;f<t/2;f++)
    {
        int g= arr[f];
        int h=arr[t-f-1];
        arr[f]=h;
        arr[t-f-1]=g;
    }
    for(int i=0;i<t;i++)
    {
        int j=arr[i];
        cout<<j<<" ";
    }
    cout<<endl;
//sort
   for(int i = 0; i < t; i++) {
        for (int j =i+1; j <t; j++) {
            if (arr[i] > arr[j]) {
               int h= arr[i];
                arr[i] = arr[j];
                arr[j] =h;
            }
        }
    }
    for (int i = 0; i <t; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
     for(int i = 0; i < t; i++) {
        for (int j =i+1; j <t; j++) {
            if (arr[i] <arr[j]) {
               int h= arr[i];
                arr[i] = arr[j];
                arr[j] =h;
            }
        }
    }
    for (int i = 0; i <t; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}