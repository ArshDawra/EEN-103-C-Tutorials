#include<iostream>
#include<string>
using namespace std;
class player
{
public:
int playnum;
string playname;
int nummatch;
int *arrayplayer;
player(int playnum,string playname,int nummatch)
    {
	this->nummatch=nummatch;
	this->playname=playname;
	this->playnum=playnum;
	arrayplayer= new int[this->nummatch];
	for(int i=0;i<nummatch;i++)
	{
		cout<<"Enter number of goals for Match No. "<<i+1<<" : ";
		cin>>arrayplayer[i];
	}
	}
void display()
{
cout<<"Match Number"<<"    "<<"Number of Goals"<<endl;
for(int i=0;i<nummatch;i++)
{
cout<<"     "<<i+1<<"         "<<"       "<<arrayplayer[i]<<" "<<endl;
}	
}
~player()
{
delete[]arrayplayer;
arrayplayer=NULL;	
}
};
int main()
{
int playnum;
string playname;
int nummatch;
cout<<"Enter player number"<<endl;
cin>>playnum;
cout<<"Enter player name"<<endl;
cin>>playname;
cout<<"Enter player's number of matches"<<endl;
cin>>nummatch;	
player p1(playnum,playname,nummatch);
p1.display();
}
