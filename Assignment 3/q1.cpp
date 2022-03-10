#include<iostream>
using namespace std;
int main()
{
    cout<<"Input number of terms"<<endl;
    int n;
    cin>>n;
    int first=0;
    int second=1;
    int count =2;
    cout<<first<<" ";
    
    while(count<=n)
    {
        cout<<second<<" ";
        int v=second;
        second=second+first;
        first=v;
        12
        count++;
    }
}