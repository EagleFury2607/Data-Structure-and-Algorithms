#include <iostream>
using namespace std;
//class inpo containing data member and member functions
class inpo
{
    char in[20],po[20],stk[10];     //stack for expression conversion.
    int i,j,is,ic,top,top1;        //Two top one for stack and one for stack 1.
    int stk1[10];                   //Stack 1 for expression evaluation.
public:
    inpo()
    {
     i=j=is=ic=0; //initialization 
     top=top1=-1;
    }
    bool IsOperand(char C)
    {
        if(C >= '0' && C <= '9') return true;
        if(C >= 'a' && C <= 'z') return true;
        if(C >= 'A' && C <= 'Z') return true;
        return false;
    }
    void getinfix() //Accept the infix expression
    {
        cout<<"\nEnter valid infix Expression: ";
        cin>>in; 
    }
    void showinfix() 
    {
        cout<<"\t"<<in;
    }
    int isempty() 
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }
    int isfull()
    {
        if(top==9)
            return 1;
        else
            return 0;
    }
    void push1(int x1)
    {
        top=top+1;
        stk1[top]=x1;
    }
    int pop1() 
    {
       int s1;
       s1=stk1[top];
       top=top-1;
       return s1;
    }
    void push(char x)
    {
        top=top+1;
        stk[top]=x;
    }
    char pop()
    {
        char s;
        s=stk[top];
        top=top-1;
        return s;
    }
    void showpostfix()
    {
        cout<<"\t"<<po;
    }
    void convert();
    int instackprio();
    int incomingprio(char); 
    void postfixExpEval();
};
void inpo::postfixExpEval() 
{
    i=0;
    char ch;
    int op1,op2,res,tot;
        while(po[i]!='\0')
{
            ch=po[i];
            if((ch=='+')||(ch=='-')||(ch=='*')||(ch=='/')||(ch=='^')) 
            {
                switch(ch)
                {
                case '+':op2=pop1();
                         op1=pop1();
                         res=op1+op2;
                         push1(res);
                         break;
                case '-':op2=pop1();
                         op1=pop1();
                         res=op1-op2;
                         push1(res);
                         break;
                case '*':op2=pop1();
                         op1=pop1();
                         res=op1*op2;
                         push1(res);
                         break;
                case '/':op2=pop1();
                         op1=pop1();
                         res=op1/op2;
                         push1(res);
                         break;
                case '^':op2=pop1();
                         op1=pop1();
                         res=op1;
                         while(op2>1)
                         {
                          res=res*op1;
                          op2--;
                         }
                         push1(res);
                         break;
                }

            } 
            else if(IsOperand(ch))
            {
                push1(ch-'0'); 
            } 
            i=i+1;
        }

    tot=pop1();
    cout<<"\nResult is:"<<tot;
}



void inpo::convert()//to convert infix expression to postfix expression
{
    i=j=0;
    char p,k;
    while(in[i]!='\0')
    {
     p=in[i];
     if((p=='(')||(p=='+')||(p=='-')||(p=='*')||(p=='/')||(p=='^')||(p==')'))
     {
         if(isempty())          {
             push(p); 
         }
         else if(p==')') 
         {
             k=pop();
             while(k!='(')
             {
                 po[j]=k; 
                 j++;   
                 k=pop(); 
             }
         }
         else
         {
             is=instackprio(); 
             ic=incomingprio(p);
             if(is>ic)
             {
              k=pop(); 
              po[j]=k;
              j++; 
              push(p);
             }
             else
             {
                 push(p); 
             }           
     }
}
     else
{
        po[j]=p;
        j++; 
     }
     i=i+1; 
    }
    if(in[i]=='\0')
    {
        while(!isempty())
        {
         k=pop(); 
         po[j]=k;
	j++;
        }
    }
 po[j]='\0'; 
}
int inpo::instackprio()
{
    char b;
    b=stk[top];
    switch(b)
    {
     case '(':return 0; break;
     case '+':return 2; break;
     case '-':return 2; break;
     case '*':return 4; break;
     case '/':return 4; break;
     case '^':return 5; break;
    }
}
/* * Function to check the priority of operator * */
int inpo::incomingprio(char ch)
{
    switch(ch)
    {
     case '(':return 9; break;
     case '+':return 1; break;
     case '-':return 1; break;
     case '*':return 3; break;
     case '/':return 3; break;
     case '^':return 6; break;
    }
}

int main()
{
    inpo p1;
    p1.getinfix();
    p1.showinfix();
    cout<<"\nAfter conversion from infix to postfix...\n";
    p1.convert();
    p1.showpostfix();
    cout << "\n\n!!!POSTFIX EXPRESSION EVALUATION ARE AS FOLLOWS..!!!" << endl;
    p1.postfixExpEval();
    return 0;
}

