#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr1[m][n];
    int arr2[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int c;
            cin>>c;
            arr1[i][j]=c;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int c;
            cin>>c;
            arr2[i][j]=c;
        }
    }
    int arr3[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int g=arr1[i][j];
            int h=arr2[i][j];
            arr3[i][j]=g+h;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int c;
            c=arr3[i][j];
            cout<<c<<" ";
        }
        cout<<endl;
    }
}