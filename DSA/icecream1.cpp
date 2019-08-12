#include<iostream>
using namespace std;

struct node
{
      int roll;
      node *next;
};

class icecream
{
int n,i,v,b,r;
public:
      node *head,*head1,*head2,*temp,*t;
      icecream()
      {
            head=head1=head2=temp=t=NULL;
      }
      
      void total();
      void vanilla();
      void butterscotch();
      void display();
      void both();
      //void either();
      void onlyv();
      //void onlyb();
      //void none();
};

int main()
{
icecream i;
i.total();
i.vanilla();
i.butterscotch();
i.display();
i.both();
i.onlyv();
return 0;
}
//Total no. of students
void icecream::total()
{
      cout<<"Enter Total No. of Students in Class\n";
      cin>>n;
      for(i=0;i<n;i++)
      {
            node *p=new(struct node);
            p->roll=i+1;
            p->next=NULL;
            
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
      temp=head;
      while(temp->next!=NULL)
      {
            cout<<"Roll no:"<<temp->roll<<"\n";
            temp=temp->next;
      }     
      cout<<"Roll no:"<<temp->roll<<"\n";
}

//Students who like Vanilla
void icecream::vanilla()
{
      cout<<"Enter no. of students who like Vanilla\n";
      cin>>v;
      cout<<"Enter Roll no.:\n";
      for(i=0;i<v;i++)
      {     
            cin>>r;
            node *p=new(struct node);
            p->roll=r;
            p->next=NULL;
		
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
            }            
      }
}

//Students who like Butterscotch
void icecream::butterscotch()
{
      cout<<"Enter no. of students who like Butterscotch\n";
      cin>>b;
      cout<<"Enter Roll no.:\n";
      for(i=0;i<b;i++)
      {     
            cin>>r;
            node *p=new(struct node);
            p->roll=r;
            p->next=NULL;
		
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
            }            
      }
}

//Display
void icecream::display()
{
	cout<<"Students who like vanilla\n";
	temp=head1;
      while(temp->next!=NULL)
      {
            cout<<"Roll no:"<<temp->roll<<"\n";
            temp=temp->next;
      }     
      cout<<"Roll no:"<<temp->roll<<"\n";
	cout<<"Students who like butterscotch\n";
	temp=head2;
      while(temp->next!=NULL)
      {
            cout<<"Roll no:"<<temp->roll<<"\n";
            temp=temp->next;
      }     
      cout<<"Roll no:"<<temp->roll<<"\n";
}

//Students who like both
void icecream::both()
{
	cout<<"Students who like both\n";
	temp=head1;
	while(temp!=NULL)
	{
		t=head2;
		while(t!=NULL)
		{
			if(temp->roll==t->roll)
			{
				cout<<"Roll no.:"<<t->roll<<"\n";
			}
			t=t->next;
		}
		temp=temp->next;
	}
}

//Students who like only vanilla
void icecream::onlyv()
{
	int flag=0;
	cout<<"Students who like only vanilla\n";
	temp=head1;
	while(temp!=NULL)
	{	flag=0;
		t=head;
		while(t!=NULL)
		{
			if(temp->roll==t->roll)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
			t=t->next;
		}
		if(flag==0)
		{
			cout<<"Roll no:"<<temp->roll<<"\n";
		}
		temp=temp->next;
	}
}
