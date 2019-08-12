#include<iostream>
using namespace std;
#define size 5
class pizza
{
	int front,rear;
	int por[size];
	public:
		pizza()
		{
			front=rear=-1;
		}
		int iffull()
		{
			if((front==0)&&(rear==(size-1))||(front==(rear+1)%size))
			return 1;
			else
			return 0;
		}
		int ifempty()
		{
			if(front==-1)
			return 1;
			else
			return 0;
		}
		void accepto(int);
		void makepay(int);
		void remaino();
};
void pizza::accepto(int item)
{
	if(iffull())
	{
		cout<<"\n!!!...So sorry!!NO more orders:";
	}
	else
	{
		if(front==-1)
		{
			front=rear=0;
		}
		else
		rear=(rear+1)%size;
		por[rear]=item;
	}
}
void pizza::makepay(int n)
{
	int item;
	if(ifempty())
	cout<<"\n No orders pending:";
	else
	{
		cout<<"\n Deliver order as follows:";
		for(int i=0;i<n;i++)
		{
			item=por[front];
			if(front==rear)
			front=rear=-1;
			else
			front=(front+1)%size;
			cout<<"pizza no:"<<item<<"\n";
		}
	}
	cout<<"\n Amount to be paid:"<<n*100;
	cout<<"\n Thanks visit again";
}
void pizza::remaino()
{
int temp;
if(ifempty())
{
	cout<<"\n NO more orders pending:";
}
else
{cout<<"\n Orders pending are:";
	for(temp=front;temp<=rear;temp=(temp+1)%size)
	{
		cout<<"\n order:"<<por[temp];
	}
}
}
int main()
{
	pizza p1;
	int ch,t=0;
	int k,n;
	do
	{
		cout<<"\n 1.Accept order.\n2.make payment.\n3.remaining orders:4.exit:";
		cout<<"\n Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\n1.panner pizza\n2.onion pizza\n3.cheese pizza\n 4.non veg pizza:";
					cout<<"\n Enter the pizza no:";
				cin>>k;
				p1.accepto(k);
				break;
			case 2:cout<<"\n Enter the no of trhe pizza:";
				cin>>n;
				p1.makepay(n);
				break;
			case 3:
				p1.remaino();
				break;
			case 4:t=1;
				break;
			default:cout<<"\n Wrong choice:";
	}
	}while(t==0);
return 0;
}
				
	
