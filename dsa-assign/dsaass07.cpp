#include<iostream>
using namespace std;
#define n 20
class stack
{
 int top;
 char A[n];
public:
stack()
{
 top=-1;
}
void push(char);
void pop();
int empty();
int full();
};
int stack::full()
{
 if(top==n)
 return 1;
 else
 return 0;
}
int stack::empty()
{
 if(top==-1)
 return 1;
 else
 return 0;
}
void stack::push(char c)
{
 
 if(full()==1)
 {
  cout<<"Stack is full";
 }
 else
 {
  A[top+1]=c;
  top++;
 }
}
void stack::pop()
{
    char s;
    s=A[top];
    top=top-1;
    
}

int main()
{
    stack s1;
    char B[20],ch;
    int i=0;
    cout<<"\nEnter the expression  :  ";
    cin>>B;
    if((B[0]==')')||(B[0]==']')||(B[0]=='}'))
    {
        cout<<"\nSyntax error...\n";
        return 0;
    }
    else
    {
        while(B[i]!='\0')
        {
            ch=B[i];
            switch(ch)
            {
            case '(':
			s1.push(ch);
			break;
            case '[':
			s1.push(ch);
			break;
            case '{':
			s1.push(ch);
			break;
            case ')':
			s1.pop();
			break;
            case ']':
			s1.pop();
			break;
            case '}':
			s1.pop();
			break;
            }
            i=i+1;
        }
    }
    if(s1.empty())
    {
        cout<<"\nExpression is well parenthesis...\n";
    }
    else
    {
        cout<<"\nSorry !!! Invalid Expression or not in well parenthesized....\n";
    }
    return 0;
}



