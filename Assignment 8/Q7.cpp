#include<iostream>
#include<string>
using namespace std;
class strings
{
    string sm;
    string s1;
    string s2;
    string sc1;
    string sc2;
    public:
    void setstring1(string input)
    {
        sm=input;
    }
    void display()
    {
        cout<<sm<<endl;
    }
     void setstring2(string ss1,string ss2)
    {
        s1=ss1;
        s2=ss2;
    }
    void check()
    {
        if(s1==s2)
        {
            cout<<"true"<<endl;
        }
        else
        {
           cout<<"false"<<endl;
        }
    }
   void setstring3(string ssc1,string ssc2)
    {
        sc1=ssc1;
        sc2=ssc2;
    }
    void concat()
    {
        string c=sc1+sc2;
        cout<<c<<endl;
    }
};

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    strings s1;
    s1.setstring1(s);
    s1.display();
    cout<<"Comparing two strings: "<<endl;
    cout<<"Enter string 1: ";
    string string1;
    cin>>string1;
    cout<<"Enter string 2: ";
    string string2;
    cin>>string2;
    strings s2;
    s2.setstring2(string1,string2);
    s2.check();
    cout<<"Concatinating two strings: "<<endl;
    cout<<"Enter string 1: ";
    string stringg1;
    cin>>stringg1;
    cout<<"Enter string 2: ";
    string stringg2;
    cin>>stringg2;
    strings s3;
    s3.setstring3(stringg1,stringg2);
    s3.concat();
    return 0;
}
