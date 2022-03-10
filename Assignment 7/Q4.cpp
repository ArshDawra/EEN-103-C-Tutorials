#include<iostream>
#include<string>
using namespace std;
class IITR
{
private:
//list of courses and their credits
int PHN003=4;
int EEN103=4;
int EEN101=2;
int MAN001=4;
int HSN001=2;
int HSN002=2;
int CEN105=3;
public:
string s;
void getdata(void);
void display(void);
};

void IITR :: getdata(void)
{
 cout<<"Enter password to access the course data: ";
    cin>>s; 
}
void IITR:: display(void)
{
    if(s=="IITR-2025UG")
    {
        cout<<"PHN003   "<<PHN003<<endl;
        cout<<"EEN103   "<<EEN103<<endl;
        cout<<"EEN101   "<<EEN101<<endl;
        cout<<"MAN001   "<<MAN001<<endl;
        cout<<"HSN001   "<<HSN001<<endl;
        cout<<"HSN002   "<<HSN002<<endl;
        cout<<"CEN105   "<<CEN105<<endl;
    }
}
int main()
{
    IITR d;
    d.getdata();
    d.display();
    return 0;
}