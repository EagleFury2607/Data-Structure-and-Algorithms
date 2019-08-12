#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class postfix
{
	char a[10],in[20],post[10],b[4],d[10],n;
	int top,i,j,k,l;
	public:
		postfix()
		{
			top=-1;
			b[0]='*';
			b[1]='/';
			b[2]='+';
			b[3]='-';
		}
		bool full();
		bool empty();
		void push(char);
		char pop();
		void get();
		void convert();
		void bodmas();
		void display();
};

bool postfix::full()
{
	if(top==9)
	return 1;
	else
	return 0;
}

bool postfix::empty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}

void postfix::push(char c)
{
	if(full())
	cout<<"Overflow";
	else
	{
	top++;
	post[top]=c;
	}
}

char postfix::pop()
{
	if(empty())
	cout<<"Underflow";
	else
	{
	return post[top];
	top--;
	}
}

void postfix::get()
{
	i=0;
	cout<<"Enter a expression:\n";
	cout<<"(Enter # after expression)\n";
	while(n=getchar()!='#')
	{
	in[i]=n;
	i++;
	}
}

void postfix::convert()
{	
	int j=0;
	for(i=0;in[i]!='\0';i++)
	{
		if('a'<in[i]<'z')
		cout<<in[i];
		if((in[i]=='/')||(in[i]=='*')||(in[i]=='-')||(in[i]=='+'))
		{cin>>a[j];j++;k++;}
		/*if(in[i]=='(')
		push(in[i]);*/
	}
	bodmas();
	for(i=0;i<l;i++)
	{
	push(d[i]);
	}
	display();	
}

void postfix::bodmas()
{
	l=0;	
	for(i=0;i<4;i++)
	{
	for(j=0;j<k;j++)
	{
	if(b[i]==a[j])
	{
	d[l]=b[i];
	l++;
	}
	}
	}
}

void postfix::display()
{
	char m;
	for(i=l;i>-1;i--)
	{
	m=pop();
	cout<<m;
	}
}

int main()
{
	postfix p;
	p.get();
	p.convert();
	return 0;
}
