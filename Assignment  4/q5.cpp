#include<iostream>
using namespace std;

int func(char ch)
{
    int m=ch;
    if(m>=90)
    {
        return 0;
    }
    cout<<ch<<'\t';
    func(ch+1);
}
int main()
{
    char ch='A';
    func(ch);
}