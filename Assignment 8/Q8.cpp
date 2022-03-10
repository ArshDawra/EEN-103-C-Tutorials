#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node* next;
	//constructor
	node(int val)
	{
		data=val;
		next=NULL;
	}
};
void insertAtTail(node* &head,int val)
{
	//forming a new node
	node* n=new node(val);
	if(head==NULL)
	{
		head=n;
		return;
	}
	node* temp=head;
	//traversing to end
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}
void display(node*head)
{
	//displaying the list
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void ascendingsorting(node* head)
{
	node *i;
	node *j;
	for(i=head;i!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
		 if((i->data)>(j->data))
		 {
		   int c=i->data;
		   i->data=j->data;
		   j->data=c;
		 }
		}
	}
}
void descendingsorting(node* head)
{
	node *i;
	node *j;
	for(i=head;i!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
		 if((i->data)<(j->data))
		 {
		   int c=i->data;
		   i->data=j->data;
		   j->data=c;
		 }
		}
	}
}
int main()
{
//creating empty list
node* head=NULL;
cout<<"Enter number of elements: ";
int g;
cin>>g;
for(int i=1;i<=g;i++)
{
	cout<<"Enter element "<<i<<" : ";
	int n;
	cin>>n; 
    insertAtTail(head,n);
}
//displaying original linked list
display(head);	
//sorting in ascending order
ascendingsorting(head);
//displaying sorted list
display(head);
//sorting in descending order
descendingsorting(head);
//displaying sorted list
display(head);
}
