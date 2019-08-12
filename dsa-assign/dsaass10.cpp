#include<iostream>
using namespace std;
#define size 5
struct Pizza
{
 string name;
 int order_no,x;
 float price;
};

class Queue
{
 Pizza order[size];
 int front,rear;
 int count,b,a[size];
 public:
 Queue()
 {
  front=rear=-1;
  count=0;
 }
 void accept_order();
 void payment();
 void remaining_order();
 void display();
 int full()
 {
  if((front==size-1)||(front==0 && rear==size-1))
  return 1;
  else
  return 0;
 }
 int empty()
 {
   if(front==-1)
            return 1;
        else
            return 0;
 }
};

void Queue::accept_order()
{
 char ch;
 int i,y,z,j,k;
 int num,l;
 do
  {
   if(full())
   {
    cout<<"\n Sorry No more Orders Please ";
   }
   else if(front==-1)
   {
    front=rear=0;
   }
   else
   {
    rear=(rear+1)%size;
   }
   cout<<"\n Enter the order No. : ";
   cin>>num;
   order[rear].order_no=num;
    b=0;
   cout<<"\n ORDER NUMBER : "<<order[rear].order_no<<endl;
   do
   {
    
    cout<<"\n Pizza List Is As Follows : ";
    cout<<"\n 1-Onion Pizza \n 2- Cheese Pizza \n 3-Corn Pizza \n 4-Eggs Pizza: "<<endl;
    cout<<"\n Enter your choice :";
    cin>>i;
    b++;
    
    
    switch(i)
    {
     case 1: order[rear].name="Onion Pizza .";
	     break;
 
     case 2: order[rear].name="Cheese Pizza. ";
	     break;

     case 3: order[rear].name="Corn Pizza .";
	     break;

     case 4: order[rear].name="Eggs Pizza .";
	     break;
            
   }
   cout<<"\n Order Pizza Name : "<<order[rear].name<<endl;
   a[rear]=b;
   cout<<"\n For more Pizza Press 1 else 0:"<<endl;
   cin>>l;
  }while(l==1);
 
 
 count++;
 
 cout<<"\n For more order press y:"<<endl;
 cin>>ch;
}while(ch=='Y'||ch=='y');
}

void Queue::payment()
{
 int item;
 int i,j,k;
      if(empty())
        cout<<"\nSorry !!! order is not there...\n";
     else
       {
                 cout<<"\nDeliverd orders as follows...\n";
                 item=order[front].order_no;
        {
          if(front==rear)
          {
               front=rear=-1;
          }
          else
          {
              front=(front+1)%size;
          }
          cout<<"\t"<<item;
             order[front].price=a[front]*100;   
      cout<<"\nTotal amount to pay : "<<a[front]*100<<endl;
    }
    }
 }



void Queue::remaining_order()
{
  int temp;
    if(empty())
    {
        cout<<"\nSorry !! There is no pending order...:\n";
    }
    else
    {
        temp=front;
        cout<<"\nRemaining Order as follows..\n";
        while(temp!=rear)
        {
            cout<<"order No. : "<<order[temp].order_no<<endl;
            temp=(temp+1)%size;
        }
         }
	 cout<<"\t"<<order[temp].order_no;
}


int main()
{
  Queue q;
  Pizza p;
  char ch,c;
  do
  {
  cout<<"\n Welcome TO Pizza Parler "; 
  cout<<"\n 1-Accept Order \n 2- Payment \n 3- Ramaining order :"<<endl;
  cout<<"\n Enter your Choice :";
  cin>>ch;
  switch(ch)
  {
  case '1' : 
          	  q.accept_order();
	 	   break;
   case '2' : 
          	  q.payment();
	   	 break;
  case '3' :
		q.remaining_order();
		break;
    }
   cout<<"\n To continue Press 'y': "<<endl;
   cin>>c;
   }while(c=='Y'||c=='y');
  return 0;
}
