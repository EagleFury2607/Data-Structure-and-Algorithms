#include<iostream>
#include<stdlib.h>
using namespace std;
//#define n 50;

class stack
{
char s[20];
int top;
public:
        stack()
        {
        top=-1;
        }
        void push(char);
        int pop();
        bool empty();
        bool full();
        void insert();
};

bool stack::full()
{
if(top==20)
        return 1;
else
        return 0;
}

bool stack::empty()
{
if(top==-1)
        return 1;
else
        return 0;
}

void stack::push(char a)
{
char b=a;
if(full())
{
cout<<"OVERFLOW";
exit(1);
}
else
{
//top++;
s[++top]=b;
}
}

int stack::pop()
{
if(empty())
{
cout<<"\nUNDERFLOW";
exit(1);
}
else
{
//cout<<"\nTOP ELEMENT:"<<s[top];
return s[top];
top--;
}
}

void stack::insert()
{
char ch,ch1;

while(1)
{
cout<<"ENTER THE CHARACTER:";
cout<<"'[','{','(',')','}',']'\n";
cin>>ch;
if(ch=='{'||ch=='('||ch=='[')
push(ch);

if(ch=='}')
{
        ch1=pop();
        if(ch1=='{')
        return(1);
        else
        {
        cout<<"ERROR:'{' NOT FOUND";
        break;
        }
}
if(ch==')')
{
        ch1=pop();
        if(ch1=='(')
        return(1);
        else
        {
        cout<<"ERROR:'(' NOT FOUND";
        break;
        }
}

if(ch==']')
{
        ch1=pop();
        if(ch1=='[')
        return(1);
        else
        {
        cout<<"ERROR:'[' NOT FOUND";
        break;
        }
}
}
}


int main()
{
stack q;
char ch;
int n;
cout<<"\nENTER NO OF CHARACTER IN THE STRING:";
cin>>n;
cout<<"\nENTER A STRING:";
for(int i=0;i<n;i++)
{
cin>>ch;
q.push(ch);
}
q.insert();
return 0;
}
