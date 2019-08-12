#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class convert
{
	char in[20],post[10],a[4],b[10],c,d[10];
	int top,n,i,j,k,l;
	public:
	convert()
	{
		i=j=k=n=0;
		top=-1;
		a[0]='-';
		a[1]='+';
		a[2]='/';
		a[3]='*';
	}
	void push(char);
	char pop();
	bool full();
	bool empty();
	void INtoPOST();
	void bodmas();
	void show();
	void get();
};

void convert::push(char c)
{
	if(full())
	{
	cout<<"Overflow";
	}
	else
	{
	++top;
	post[top]=c;
	}
}

char convert::pop()
{
	if(empty())
	{
	cout<<"Underflow";
	}
	else
	{
                                                                                                                                                                                                                                                                                                  		return post[top];
	top--;
	}
}

bool convert::full()
{
	if(top==9)
 	{
     	return 1;
   	}
   	else
  	{
     	return 0;   
   	}
}

bool convert::empty()
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

void convert::INtoPOST()
{
	
	while(in[i]!='\0')
	{
		if(isalpha(in[i]))
		{
			d[l]=in[i];
		i++;	l++;
		}
		else if((in[i]=='*')||(in[i]=='/')||(in[i]=='+')||(in[i]=='-'))
		{
			b[n]=in[i];
		i++;	n++;
		}
		//i++;
	}
	bodmas();
	show();
}

void convert::bodmas()
{
	k=0;
	for(i=0;i<4;i++)
	{
	for(j=0;j<n;j++)
	{
	if(a[i]==b[j])
	{
	push(b[j]);
	k++;
	}
	}
	}
}

void convert::show()
{
	cout<<"Infix expression is "<<in<<"\n";
	cout<<"It's postfix form is ";
	for(i=0;i<l;i++)
	cout<<d[i];
	char z;
	for(i=0;i<k;i++)
	{
	//z=pop();
	cout<<pop();
	}
	cout<<"\n";
}

void convert::get()
{
cout<<"Enter a infix expression:\n";
cin>>in;
}

int main()
{
	convert cvt;
	cvt.get();
	cvt.INtoPOST();
	return 0;
}
