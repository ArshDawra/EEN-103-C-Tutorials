#include<iostream>
#include<string>
using namespace std;
void swap(char* a, char *b)
{
  char f;
  f=*a;
  *a=*b;
  *b=f;   
}
int main()
{
    string s;
    cout<<"enter string: ";
    cin>>s;
    int l= s.length();
    char arr[l];
     for(int i=0;i<l;i++)
    {
        arr[i]=s[i];
    }
    for(int j=0;j<l;j++)
    {
        for(int i=j+1;i<l;i++)
        {
            if((int)arr[i]<(int)arr[j])
            {
               swap(&arr[j],&arr[i]);
            }
        }
    }
    for(int i=0;i<l;i++)
    {
        cout<<arr[i];
    }
    return 0;
}