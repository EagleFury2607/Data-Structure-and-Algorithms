#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
int x;
node *next,*prev;
};
class binary
{
public:int a;
	int cy;
	node *head2,*head,*head1,*temp,*t,*t1,*head3;
	binary()
	{
	head=head1=temp=head2=t=t1=NULL;
	cy=0;
	}
	
	void create();
	void display();
	void complement1();
	void complement2();
	void add();
};

int main()
{
	binary b;
	b.create();
	b.display();
	b.complement1();
	b.complement2();
	b.add();
	return 0;
}

void binary::create()
{
	int j,r;

	cout<<"\nENTER THE NO. OF BITS IN BINARY NUMBER:";
	cin>>a;
	cout<<"\nENTER THE BIT (FROM MSB TO LSB BY PRESSING ENTER):\n";

	for(j=0;j<a;j++)
	{
		cin>>r;
		node *p=new(struct node);;
		p->x=r;
		p->next=NULL;
		p->prev=NULL;

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
			p->prev=temp;
			p->next=NULL;
		}
	}
}



void binary::display()
{
	cout<<"\nBinary no. is\n";
	temp=head;
	while(temp->next!=NULL)
	{
		cout<<temp->x;
		temp=temp->next;
	}
	cout<<temp->x;
	cout<<"\n";
}

void binary::complement1()
{
	cout<<"1's complement of no is:\n";
	temp=head;
	while(temp!=NULL)
	{
		if(temp->x==0)
		{
			cout<<"1";
		}
		else if(temp->x==1)
		{
		 	cout<<"0";
		}
		temp=temp->next;
	}
	cout<<"\n";
}
void binary::add()
{
	int i,k,r;
	int sum[a+1];
	for(i=0;i<a+1;i++)
	{
	sum[i]=0;
	}
	display();
	cout<<"\nENTER SECOND NUMBER\nENTER THE BIT (FROM MSB TO LSB BY PRESSING ENTER):\n";

	for(k=0;k<a;k++)
	{
		cin>>r;
		node *p=new(struct node);;
		p->x=r;
		p->next=NULL;
		p->prev=NULL;

		if(head1==NULL)
		{
			head1=p;
		}
		else
		{
			temp=head1;
			while(temp->next!=NULL)
			temp=temp->next;

			temp->next=p;
			p->prev=temp;
			p->next=NULL;
		}
	}
	cout<<"\nBinary no. is\n";
	temp=head1;
	while(temp->next!=NULL)
	{
		cout<<temp->x;
		temp=temp->next;
	}
	cout<<temp->x;
	cout<<"\n";
	temp=head;
	while(temp->next!=NULL)
	temp=temp->next;
	t=head1;
	while(t->next!=NULL)
	t=t->next;
	for(i=a;i>0;i--)
	{
		if(temp->x+t->x+cy==0)
		{
		cy=0;
		sum[i]=0;
		}
		else if(temp->x+t->x+cy==1)
		{
		cy=0;
		sum[i]=1;
		}
		else if(temp->x+t->x+cy==2)
		{
		cy=1;
		sum[i]=0;
		}
		else if(temp->x+t->x+cy>2)
		{
		cy=1;
		sum[i]=1;
		}
		temp=temp->prev;
		t=t->prev;
	}
	cout<<"Sum:\n";
	sum[0]=cy;
	cout<<sum[0];
	for(i=1;i<a+1;i++)
	{
		cout<<sum[i];
	}
}

void binary::complement2()
{
int i,j,r;
	int sum[a+1];
	for(i=0;i<a+1;i++)
	{
	sum[i]=0;
	}
	
	cout<<"\n";
	int asd[]={0,0,0,0,1};
	for(j=0;j<a;j++)
	{
		
		node *p=new(struct node);;
		p->x=asd[j];
		p->next=NULL;
		p->prev=NULL;

		if(head2==NULL)
		{
			head2=p;
		}
		else
		{
			temp=head2;
			while(temp->next!=NULL)
			temp=temp->next;

			temp->next=p;
			p->prev=temp;
			p->next=NULL;
		}
	}
	temp=head;
	while(temp->next!=NULL)
	temp=temp->next;
	t=head2;
	while(t->next!=NULL)
	t=t->next;
	for(i=a;i>0;i--)
	{
		if(temp->x+t->x+cy==0)
		{
		cy=0;
		sum[i]=0;
		}
		else if(temp->x+t->x+cy==1)
		{
		cy=0;
		sum[i]=1;
		}
		else if(temp->x+t->x+cy==2)
		{
		cy=1;
		sum[i]=0;
		}
		else if(temp->x+t->x+cy>2)
		{
		cy=1;
		sum[i]=1;
		}
		temp=temp->prev;
		t=t->prev;
	}
	cout<<"2'S Complement:\n";
	sum[0]=cy;
	cout<<sum[0];
	for(i=1;i<a+1;i++)
	{
		cout<<sum[i];
	}
	
}

