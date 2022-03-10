#include<iostream>
using namespace std;
int main()
{
    int first_value=12,second_value=56;
    int* my_pointer;
    cout<<first_value<<" "<<second_value<<endl;
    my_pointer=&second_value;
    *my_pointer=first_value;
    my_pointer=&second_value;
    *my_pointer=7;
     cout<<first_value<<" "<<second_value;

}