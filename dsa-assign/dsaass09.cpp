#include<iostream>
using namespace std;
struct node
{
 int job_no;
 int et;
 int start;
 int com;

 node *next;
};

class Queue
{
 
  node *rear,*front;
 public:
 Queue()
 {
  
  rear=front=NULL;
 }

 void enqueue();
 void display();
 void remove();
};

void Queue::enqueue()
{
 int ct,e,s=0;
 int num,x;
 int m=0;
 do
  {
   node *n=new (struct node);
   cout<<"\n JobNO.";
   cin>>num;
   n->job_no=num;
   cout<<"\n Start Time ";
   cout<<s;
   n->start=s;
   cout<<"\n Execution Time ";
   cin>>e;
   n->et=e;
   ct=e+s+1;
   cout<<"\n Complition Time = "<<ct;
   n->com=ct;

   s=ct+1;
   n->next=NULL;

  if(rear==NULL)
   {
    front=rear=n;
    rear->next=NULL;
   }
  else
   {
    rear->next=n;
    rear=rear->next;
    rear->next=NULL;
   }
  cout<<"\n To continue Press 0 else press 1:";
  cin>>x;

 }while(x==0);
   } 

void Queue::display()
{
  while(front!=NULL)
 {cout<<"|----------------------|"<<endl;
  cout<<"| JOB NO          = "<<front->job_no<<" |"<<endl;
  cout<<"| START TIME      = "<<front->start<<" |"<<endl;
  cout<<"| EXECUTION TIME  = "<<front->et<<" |"<<endl;
  cout<<"| COMPLITION TIME = "<<front->com<<"|"<<endl;
  cout<<"|----------------------|"<<endl;
  front=front->next;
 }
}
  
void Queue::remove()
{ node *l=NULL;
  node *t=NULL;
  t=front;
 
 if(front==NULL)
 {
  cout<<"\n Empty Queue \n";
 }
 else
 {
  l=front;
  front=front->next;
  delete(l);
 }
}




int main()
{
 int p,j=0;
 Queue q;
 do
 {
  cout<<"\n||---------QUEUE OPERATIONS------------||";
 cout<<"\n 1-Enqueue \n 2-Display \n 3- Dequeue \n \n";
 cout<<"\nEnter your Choice ";
 cin>>p;
 switch(p)
 {
	case 1:
 		q.enqueue();
		break;

	case 2:
		q.display();
		break;
	case 3:
		q.remove();
		break;

 }
 cout<<"\n Press 1 to continue  else 0:";
 cin>>j;
 }while(j!=0);
 return 0;
}
