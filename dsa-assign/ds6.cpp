#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int bi;
	node *next;
	node *prev;
};
class binary
{
	int no,cnt;
	node *head1,*head2;
	public:
	binary()
	{
		no=cnt=0;
		head1=head2=NULL;
	}
	void create1();
	void create2();
	void ones_com();
	void twos_com();
	void add();
};
void binary::create1()
{
	node *temp,*temp1,*n1;
	temp=n1=temp1=NULL;
	cout<<"\n Enter the length of the binary numbers:";
	cin>>cnt;
	cout<<"\n Enter the bits of the binary number:\n";
	
	for(int i=0;i<cnt;i++)
	{
		n1=new node;
		cout<<"BIT=";
		cin>>no;
		n1->bi=no;
		n1->next=NULL;
		
		if(head1==NULL)
		{
			head1=n1;
			n1->prev=NULL;
			temp=head1;
		}
		else 
               {
                   temp=head1;
                   temp1=head1;
                   while(temp->next!=NULL)
                     {
                        
                       temp=temp->next;
                       temp->prev=temp1;
                       temp1=temp1->next;
                     }       
                       temp->next=n1;
                       n1->next=NULL;
                       n1->prev=temp;
              }   
  }
	
	temp=head1;
	cout<<"\n First binary number is:";
	while(temp!=NULL)
	{
		cout<<temp->bi;
		temp=temp->next;
	}
}
void binary::create2()
{
	node *temp,*temp1,*n1;
	temp=temp1=n1=NULL;
	cout<<"\n Enter the length of the binary numbers:";
	cin>>cnt;
	cout<<"\n Enter the bits of the binary number:\n";
	
	for(int i=0;i<cnt;i++)
	{
		n1=new node;
		cout<<"BIT=";
		cin>>no;
		n1->bi=no;
		if(head2==NULL)
		{
			head2=n1;
			n1->next=NULL;
		n1->prev=NULL;
		
		}
		else 
               {
                   temp=head2;
                   temp1=head2;
                   while(temp->next!=NULL)
                     {
                        
                       temp=temp->next;
                       temp->prev=temp1;
                       temp1=temp1->next;
                     }       
                       temp->next=n1;
                       n1->next=NULL;
                       n1->prev=temp;
              }   
}
	
	temp=head2;
	cout<<"\n Second  binary number is:";
	while(temp!=NULL)
	{
		cout<<temp->bi;
		temp=temp->next;
	}
}
void binary::ones_com()
{
	node *temp1,*temp2;
	temp1=temp2=NULL;
	cout<<"\n Ones com of first number:";
	for(temp1=head1;temp1!=NULL;temp1=temp1->next)
	{
		if(temp1->bi==1)
		{
			cout<<"0";
		}
		else
cout<<"1";
	}
	
	cout<<"\n Ones com of second number:";
	for(temp2=head2;temp2!=NULL;temp2=temp2->next)
	{
		if(temp2->bi==1)
		{
			cout<<"0";
		}
		else
		cout<<"1";
	}
	
}
void binary::twos_com()
{
    
	cout<<"\n Twos complement of first no:";
	node *temp;
	temp=NULL;
	temp=head1;
	 while(temp->next!=NULL)
       {
       temp=temp->next;
       }
	int n=cnt;
       int o[n];
       int j=n-1;
       int b1,b2=1,s=0,c=0;
      int f=temp->bi;
      if(f==1)
      {
       b1=0;
     }
     else
     b1=1;
      s=(b1+b2)%2;
      c=(b1+b2)/2;
      o[j]=s;
      
    while(temp->prev!=NULL)
      {
      temp=temp->prev;
        int f=temp->bi;
      if(f==1)
      {
       b1=0;
     }
     else
     b1=1;
     
       s=(b1+c)%2;
       c=(b1+c)/2;
       j--;
       o[j]=s;
     
      }
   cout<<"2's compliment"<<endl;
   if (c==1)
    {
      cout<<"1\t";
    }   
 for(int i=0;i<n;i++)
    { 
    cout<<o[i]<<"\t"; 
    
    } 
    
 
}
void binary::add()
{
	int n;
	n=cnt;
	node *temp,*temp2;
	temp=temp2=NULL;
  cout<<"addition of binary"<<endl;
    temp=head1;
    temp2=head2;
    while(temp->next!=NULL&&temp2->next!=NULL)
       {
       temp=temp->next;
       temp2=temp2->next;
       }
       int o[n];
       int j=n-1;
       int b1,b2,s=0,c=0;
      b1=temp->bi;
      b2=temp2->bi;
      s=(b1+b2+c)%2;
      c=(b1+b2+c)/2;
      o[j]=s;
      
    while(temp->prev!=NULL&&temp2->prev!=NULL)
      {
      temp=temp->prev;
      temp2=temp2->prev;
       b1=temp->bi;
      b2=temp2->bi;
      s=(b1+b2+c)%2;
      c=(b1+b2+c)/2;
      j--;
      o[j]=s;
      
      
      }
   cout<<"addition 0f 1 and 2:"<<endl;
   if (c==1)
    {
      cout<<"1\t";
    }   
 for(int i=0;i<n;i++)
    { 
    cout<<o[i]<<"\t"; 
    
    } 
    
         
  }
 


		
int main()
{
int ch,co=0;
binary b1;
do
{
	cout<<"\n1.Number one:";
	cout<<"\n 2.Number two:";
	cout<<"\n 3.ones complrment\n4.twos complement\n5.addition:\n6.Exit";
	cout<<"\n Enter tour choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			b1.create1();
			break;
		case 2:
			b1.create2();
			break;
		case 3:b1.ones_com();
			break;
		case 4:b1.twos_com();
			break;
		case 5:b1.add();
			break;
		case 6:co=1;
			break;
		default:cout<<"\n Wrong choice!!!";
	}
	}while(co==0);
return 0;
}	






























