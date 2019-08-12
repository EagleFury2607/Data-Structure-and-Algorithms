#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
int rollno;
node *next;
};

class Icecream
{
node *head1=NULL,*head2=NULL,*head3=NULL,*temp=NULL,*t=NULL;
node *head4=NULL,*tmp=NULL,*t1=NULL,*t2=NULL;
public:
        void createo();
        void createv();
        void createb();
        void eit();
        void both();
        void van();
        void btrs();
};

void Icecream::createo()
{
int i,r,n;

cout<<"\nENTER THE NO. OF STUDENTS IN SE:";
cin>>n;

for(i=1;i<=n;i++)
{

node *p=(node*)malloc(sizeof(node*));

p->rollno=i;
p->next=NULL;
if(head1==NULL)
{
head1=p;
}

else
{
temp=head1;
while(temp->next!=NULL)
temp=temp->next;

temp->next=p;
}
}
int j=1;
temp=head1;
while(temp!=NULL)
{
cout<<"\n"<<j<<" NODE";
cout<<"\nRoll No.:"<<temp->rollno;
temp=temp->next;
j++;
}
}

void Icecream::createv()
{
int i,r,n;

cout<<"\nENTER THE NO. OF STUDENTS WHO LIKE VANILLA ICECREAM:";
cin>>n;

for(i=0;i<n;i++)
{
cout<<"\nENTER ROLL NUMBER OF "<<i+1<<" STUDENT:\n";
cin>>r;
node *p=(node*)malloc(sizeof(node*));

p->rollno=r;
p->next=NULL;
if(head2==NULL)
{
head2=p;
}

else
{
temp=head2;
while(temp->next!=NULL)
temp=temp->next;

temp->next=p;
}
}
int j=1;
temp=head2;
while(temp!=NULL)
{
cout<<"\n"<<j<<" NODE";
cout<<"\nRoll No.:"<<temp->rollno;
temp=temp->next;
j++;
}
}

void Icecream::createb()
{
int i,r,n;

cout<<"\nENTER THE NO. OF STUDENTS WHO LIKES BUTTERSCOTH ICECREAM:";
cin>>n;

for(i=0;i<n;i++)
{
cout<<"\nENTER ROLL NUMBER OF "<<i+1<<" STUDENT:\n";
cin>>r;
node *p=(node*)malloc(sizeof(node*));

p->rollno=r;
p->next=NULL;
if(head3==NULL)
{
head3=p;
}

else
{
temp=head3;
while(temp->next!=NULL)
temp=temp->next;

temp->next=p;
}
}
int j=1;
temp=head3;
while(temp!=NULL)
{
cout<<"\n"<<j<<" NODE";
cout<<"\nRoll No.:"<<temp->rollno;
temp=temp->next;
j++;
}
}

//STUDENTS WHO LIKES BOTH VANILLA AND BUTTERSCOTCH
void Icecream::both()
{
cout<<"\nSTUDENT WHO LIKES BOTH VANILLA AND BUTTERSCOTCH:";
temp=head2;
while(temp!=NULL)
{
        t=head3;
        while(t!=NULL)
        {
        if(temp->rollno==t->rollno)
        {
        cout<<"\nRoll NO:-"<<temp->rollno;
        }
        t=t->next;
        }
temp=temp->next;
}
}





int main()
{
Icecream ic;
ic.createo();
ic.createv();
ic.createb();
ic.both();
//ic.eit();
ic.van();
ic.btrs();

ic.eit();
return 0;
}


//STUDENTS WHO LIKE EITHER VANILLA OR BUTTERSCOTCH OR BOTH
void Icecream::eit()
{
//cout<<"sk \n";
head4=head2;
cout<<"\nSTUDENTS WHO LIKE EITHER VANILLA OR BUTTERSCOTCH OR BOTH:";

int flag=0;
node *p=new(struct node);
t1=head3;

while(t1->next!=NULL)
{
t2=head2;flag=0;
while(t2->next!=NULL)
{
if(t1->rollno!=t2->rollno)
{
//cout<<"sk\n";
flag=1;
}
t2=t2->next;
}
if(flag==1)
{
temp=head4;
while(temp->next!=NULL)
temp=temp->next;

temp->next=t1;
//cout<<"sk\n";
}
t=t1->next;
}

//DISPLAY
temp=head4;
while(temp!=NULL)
{
cout<<"sk\n";
cout<<"\nROLL NO.:"<<temp->rollno;
temp=temp->next;
}

}



//ONLY VANILLA
void Icecream::van()
{
int flag=0;
t1=head2;
cout<<"\n\nSTUDENTS WHO LIKE ONLY VANILLA:";
while(t1->next!=NULL)
{
t2=head3;
while(t2->next!=NULL)
{
if(t1->rollno==t2->rollno)
{
flag=1;break;
}
else
flag=0;
t2=t2->next;
}
if(flag==0)
{
cout<<"\nROll No.:"<<t1->rollno;
}
t1=t1->next;
}
if(t1->rollno!=t2->rollno)
cout<<"\nRoll No.:"<<t1->rollno;
}

//ONLY BUTTERSCOTCH
void Icecream::btrs()
{
int flag=0;
cout<<"\n\nSTUDENTS WHO LIKE ONLY BUTTERSCOTCH:";
t1=head3;

while(t1->next!=NULL)
{
t2=head2;
while(t2->next!=NULL)
{
if(t1->rollno==t2->rollno)
{
flag=1;break;
}
else
flag=0;
t2=t2->next;
}
if(flag==0)
{
cout<<"\nROll No.:"<<t1->rollno;
}
t1=t1->next;
}
if(t1->rollno!=t2->rollno)
cout<<"\nRoll No.:"<<t1->rollno;
}
/*
//NEITHER VANILLA NOR BUTTERSCOTCH

int flag=0;
t1=head1;
while(t1->next!=NULL)
{
t2=head4;
while(t2->next!=NULL)
{
if(t1->roll_no==t2->roll_no)
{
flag=1;
break;
}
else
flag=0;
t2=t2->next;
}
if(flag==o)
{
cout<<"\nROLL No.:"<<t1->roll_no;
}
t1=t1->next;
}
*/
