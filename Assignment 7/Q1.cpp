#include<iostream>
using namespace std;

int main()
{
    //creating array
    int *marksArray=new int[4];;
    //entering values
    for(int i=0;i<4;i++)
    {
        int n;
        cout<<"Enter marks: "<<endl;
        cin>>n;
        *(marksArray+i)=n;
        cout<<endl;
    }
    //displaying elements
     for(int i=0;i<4;i++)
    {
        int n=*(marksArray+i);
        cout<<n<<" ";
        cout<<endl;
    }
    //second Array
    int  *marksArrayA=new int[8];
    //tranferring marks of first array
     for(int i=0;i<4;i++)
    {
        int n=marksArray[i];
        marksArrayA[i]=n;
    }
    //deleting first array
    delete [] marksArray;
    //second array elements
    for(int i=4;i<8;i++)
    {
        int n;
        cout<<"Enter marks: "<<endl;
        cin>>n;
        *(marksArrayA+i)=n;
        cout<<endl;
    }
    //displaying elements of second array
      for(int i=0;i<8;i++)
    {
        int n=*(marksArrayA+i);
       cout<<n<<" ";
       cout<<endl;
    }
     //deleting second array
    delete [] marksArrayA;
    //Deleting is neccesary as it leads to memory leak and it may cause memory shortage
    return 0;
}