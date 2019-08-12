#include<iostream>
#include<stdlib.h>

using namespace std;

class stack
{
	int top,n,x;
	char st[20],a[20];
	public:
	stack()
	{
	top=-1;
	n=0;
	}
		int stackin();
		int push(char);
		int pop();
		bool full();
		bool empty();
};

//push FUNCTION
int stack::push(char a)
{
char b=a;
if(full())
{
exit(1);
}
else
{
st[++top]=b;
}
}

//pop FUNCTION
int stack::pop()
{
if(empty())
{
exit(1);
}
else
{
return st[top];
top--;
}
}

//full FUNCTION
bool stack::full()
{
	if(top==20)
 	{
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
     		return 1;
   	}
   	else
  	{
     		return 0;   
   	}
}

//stackin
int stack::stackin()
{	
	int i;
	char c1,c;
	cout<<"Enter no of characters\n";
	cin>>n;
	cout<<"Enter characters\n";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	i=0;
	do
	{
	c=a[i];
	if(c=='{'||c=='['||c=='(')
	push(c);
	
	if(c=='}')
	{
		c1=pop();
		if(c1=='{')
		return(1);
		else
		{
		cout<<"MISMATCH ERROR '}' ";
		return(1);
		}			
	}
	 else if(c==']')
	{
		c1=pop();
		if(c1=='[')
		return(1);
		else
		{
		cout<<"MISMATCH ERROR ']'";
		return(1);
		}			
	}	
	else if(c==')')
	{
		c1=pop();
		if(c1=='(')
		return(1);
		else
		{
		cout<<"MISMATCH ERROR ')'";
		return(1);
		}			
	}	
	i++;	
	}while(i<n);	
}
int main()
{	
	stack s;
	s.stackin();
	return 0;
}
