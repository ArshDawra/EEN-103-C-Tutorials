#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    
    ofstream NOTESq6;
    NOTESq6.open("NOTES.TXT");
    for(int i=1;i<=100;i++)
    {
        NOTESq6<<i<<" ";
    }
    NOTESq6.close();
    
}