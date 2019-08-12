#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
int prn,prn1;
node *next;
};

class club
{
int cnt;
node *head,*head1,*temp1,*temp,*t,*tem;
public:
	club()
	{
	head=temp=t=NULL;
	cnt=0;
	}
	node *create();
	void display(node *);
	void count();
	void insertpres();
	void insertsec();
	void deletepres();
	void deletesec();
	void deletemem();
	void concatenate();
};
int main()
{
club c;
node *h;
int oper,x;
do
{
cout<<"Enter operation\n";
cin>>oper;
switch(oper)
{
	case 1:h=c.create();
	break;
	case 2:c.display(h);
	break;
	case 3:c.count();
	break;
	case 4:c.insertpres();
	break;
	case 5:c.insertsec();
	break;
	case 6:c.deletepres();
	break;
	case 7:c.deletesec();
	break;
	case 8:c.deletemem();
	break;
	case 9: club c1,c2,c3;
		node *h1,*h2,*h3;
		h1=c1.create();
		cout<<"SE A Div:\n";
		c1.display(h1);
		h2=c2.create();
		cout<<"SE B Div:\n";
		c2.display(h2);
		h3=c3.concatenate(h1,h2);
		cout<<"After merging\n";
		c3.dislay(h3)
	break;
}
cout<<"Enter 1 to continue 0 to exit\n";
cin>>x;
}while(x==1);
return 0;
}

node* club::create()
{
	int i,n;
	cout<<"Enter no of members\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"Enter prn no of member\n";
	node *p=(node*)malloc(sizeof(node));
	cin>>p->prn;
	
	if(head==NULL)
	{
	head=p;
	}
	else
	{
	temp=head;
	while(temp->next!=NULL)
	
	temp=temp->next;
	temp->next=p;
	
	}
	}
	}
void club::display(node *head)
{
temp=head;
while(temp->next!=NULL)
{
cout<<"PRN:\t"<<temp->prn<<"\n";
temp=temp->next;
}
cout<<"PRN:\t"<<temp->prn<<"\n";
}
void club::count()
{
temp=head;
while(temp->next!=NULL)
{
cnt++;
temp=temp->next;
}
cnt++;
cout<<cnt;
}
void club::insertpres()
{
	
	cout<<"Enter prn no of new president\n";
	node *p=(node*)malloc(sizeof(node));
	cin>>p->prn;
	p->next=head;
	head=p;
}
void club::insertsec()
{
	temp=head;
	while(temp->next!=NULL)
	temp=temp->next;
	cout<<"Enter prn no of new secretary\n";
	node *p=(node*)malloc(sizeof(node));
	cin>>p->prn;
	p->next=NULL;
	temp->next=p;
}
void club::deletepres()
{
	temp=head;
	head=head->next;
	temp->next=NULL;
	free(temp);
}
void club::deletesec()
{
	temp=head;
	while(temp->next!=NULL)
	{
	t=temp;
	temp=temp->next;
	}
	t->next=NULL;
	free(temp);
}
void club::deletemem()
{
	int prm;
	cout<<"Enter prn of member you want to delete\n";
	cin>>prm;
	temp=head;
	t=head;
	while(temp->next!=NULL)
	{
		if(temp->prn==prm)
		{
			t->next=temp->next;
			free(temp);
			break;
		}
		t=temp;
		temp=temp->next;
	}
}
void club::concatenate(node *head1,node *head2)
{
	node *head3,*temp,*temp1;
	head3=temp=temp1=NULL;
	temp=head1;
	head3=head1;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp1=head2;
	temp->next=temp1;
	return head3;
	
}
