#include<iostream>
using namespace std;
class students
{
    public:
    double c1,cg1;
    double c2,cg2;
    double c3,cg3;
    double c4,cg4;
    double c5,cg5;
    void getvalue();
    void display();
    double sgpa;
};
int main()
{
    students record[30];
    for(int i=0;i<30;i++)
    {
        record[i].getvalue();
        record[i].display();
    }
    return 0;
}
void students :: getvalue()
{
    cout<<"\n Enter Credits of Courses";
    cin>>c1>>c2>>c3>>c4>>c5;
    cout<<"\n Enter CGPA of one student";
    cin>>cg1>>cg2>>cg3>>cg4>>cg5;
    sgpa=((c1*cg1)+(c2*cg2)+(c3*cg3)+(c4*cg4)+(c5*cg5))/(c1+c2+c3+c4+c5);
}
void students :: display()
{
    cout<<sgpa<<endl;
}
