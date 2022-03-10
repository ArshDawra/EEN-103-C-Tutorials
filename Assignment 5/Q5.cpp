#include<iostream>
using namespace std;
int main()
{
    int Array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // first part
    cout<<"First Part"<<endl;
   for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int c=Array[i][j];
            cout<<c<<" ";
        }
        cout<<endl;
    }
    cout<<"Second Part"<<endl;
    //second part
    for(int i=0;i<3;i++)
    {
         for(int j=0;j<3;j++)
    {
        cout<<*(*(Array+i)+j)<<" ";
    }
    cout<<endl;
    }
    //third part
    cout<<"Third Part"<<endl;
    for(int i=0;i<3;i++)
    {
         for(int j=0;j<3;j++)
    {
        int *p=&Array[i][j];
        cout<<*p<<" ";
    }
    cout<<endl;
}
}