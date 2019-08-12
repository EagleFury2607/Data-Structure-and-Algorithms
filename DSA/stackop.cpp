#include<iostream>
#include<stdlib.h>

using namespace std;

class stack
{
	int top,n,x;
	char a,st[1000];
	public:
	stack()
	{
	top=-1;
	n=0;
	}
		void stackin();
		void push();
		void pop();
		bool full();
		bool empty();
};

//push FUNCTION
void stack::push()
{
	if(full())
	{
		cout<<"\nOVERFLOW\n";
		return;
	}
	else
	{
		cin>>st[top];
	}
}

//pop FUNCTION
void stack::pop()
{
	
	if(empty())
	{
		cout<<"\nUNDERFLOW\n";
		return;
	}
	else
	{
		cout<<"\nTop element:\n";
     		cout<<st[top]<<"\n";
    		st[top]=0;
     		top--;
	}
}

//full FUNCTION
bool stack::full()
{
	if(top==n-1)
 	{
  		cout<<"\noverflow\n";
     		return 1;
   	}
   	else
  	{
     		return 0;   
   	}
}

//empty FUNCTION
bool stack::empty()
{
	if(top==-1)
 	{
  		cout<<"\nunderflow\n";
     		return 1;
   	}
   	else
  	{
     		return 0;   
   	}
}

//stackin
void stack::stackin()
{	
	int i;
	cout<<"Enter characters uptil you want to exit enter 0\n";
	do
	{
	while(st[top]=='}'||st[top]==']'||st[top]==')')
	{
		top=i;
		cin>>st[top];
		a++;
	}
	cin>>st[top];
	if(a=='}')
	{
		if(st[top]=='{')
		{
			pop();
		}
		else
		{
			cout<<"\nMISMATCH CLOSING CHARACTER\n";
		}
	}
	else if(a==']')
	{
		if(st[top]=='[')
		{
			pop();
		}
		else
		{
			cout<<"\nMISMATCH CLOSING CHARACTER\n";
		}
	}
	else if(a==')')
	{
		if(st[top]=='(')
		{
			pop();
		}
		else
		{
			cout<<"\nMISMATCH CLOSING CHARACTER\n";
		}
	}
		
	}while(st[top]!=0);	
}
int main()
{
	stack s;
	s.stackin();
	return 0;
}
