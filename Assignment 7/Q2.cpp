#include<iostream>
#include<string>
using namespace std;

 struct date
 {
    int date;
    int month;
    int year;

};
 struct students
 {
        string name;
        int enrolno;
        date joindate;
};
 struct faculty
 {
        string name;
        int enrolno;
        date joindate;
};
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    students list[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the name & enrollment number of the Student "<<i+1<<endl;
        cin>>list[i].name;
        int x;
        cin>>x;
        list[i].enrolno=x;
        cout<<"Enter join date:"<<endl;
        cin>>list[i].joindate.date>>list[i].joindate.month>>list[i].joindate.year;
    }
    for(int i=1;i<n;i++){
        students x=list[i];
        int t=x.joindate.year;
        int j=i-1;
        while(j>=0 && list[j].joindate.year>t){
            list[j+1]=list[j];
            j-=1;}   
        list[j+1]=x;
    }
    faculty slist[n];
    for(int i=0;i<n;i++){
        slist[i].name=list[i].name;
        slist[i].enrolno=list[i].enrolno;
        slist[i].joindate.date=list[i].joindate.date;
        slist[i].joindate.month=list[i].joindate.month;
        slist[i].joindate.year=list[i].joindate.year;

        cout<<slist[i].name<<" "<<slist[i].enrolno<<" "<<slist[i].joindate.date<<"\\"<<slist[i].joindate.month<<"\\"<<slist[i].joindate.year<<endl;
    }

    return 0;
}