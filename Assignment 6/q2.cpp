#include<iostream>
using namespace std;

int main(){
    int sales[4][5];
    for(int i=0;i<4;i++)
    {
        cout<<"Value of Product 1: ";
        cin>>sales[i][0];
        cout<<"Value of Product 2: ";
        cin>>sales[i][1];
        cout<<"Value of Product 3: ";
        cin>>sales[i][2];
        cout<<"Value of Product 4: ";
        cin>>sales[i][3];
        cout<<"Value of Product 5: ";
        cin>>sales[i][4];
    }
    //to print the data set
    cout<<"            "<<" "<<"Product 1"<<" "<<"Product 2"<<" "<<"Product 3"<<" "<<"Product 4"<<" "<<"Product 5"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"Salesman "<<i+1<<"          "<<sales[i][0]<<"       "<<sales[i][1]<<"         "<<sales[i][2]<<"           "<<sales[i][3]<<"          "<<sales[i][4]<<endl;
    }
    return 0;
}