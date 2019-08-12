#include<iostream>
using namespace std;
 struct node
{
 int x;
 node *next;
};
class Student
{
 int num,cnt;
 node *head1,*head2,*head3,*head4,*temp,*head5;
 public:
 Student()
 {
  num=cnt=0;
  head1=NULL;
  head2=NULL;
  head3=NULL;
  head4=NULL;
  head5=NULL;
  temp=NULL;
 }
 void create_list1();//list of all students
 void create_list2();//list of students like vanilla
 void create_list3();//list of students like butterscotch
 void uni();
 void intersect();
 void onlyvanilla();
 void onlybutterscotch();
 void neither_nor();
};
void Student::create_list1()
{
 node *temp,*n;
 temp=n=NULL;
 cout<<"\n Enter the total no.of students in class";
 cin>>cnt;
 for(int i=1;i<=cnt;i++)
  {
   n=new node;
  
        
   n->x=i;
   n->next=NULL;
   if(head1==NULL)
   {
    head1=n;
    
   }
 else
{
 temp=head1;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp->next=n;
}
}

 temp=head1;
 while(temp!=NULL)
 {
     if(temp->next==NULL)
     {
      cout<<"\t"<<temp->x;
     }
     else
     {
      cout<<"\t"<<temp->x;
     }
     temp=temp->next;
 }
}
void Student::create_list2()
{
 node *temp,*n;
 temp=n=NULL;
 cout<<"\n Enter the total no.of students in class who like vanilla ice cream";
 cin>>cnt;
 for(int i=0;i<cnt;i++)
  {
   n=new node;
   cout<<"\n Enter the roll no of students:";
   cin>>num;
   n->x=num;
   n->next=NULL;
   if(head2==NULL)
   {
    head2=n;
    
   }
 else
{
 temp=head2;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp->next=n;
}
}

 temp=head2;
 while(temp!=NULL)
 {
     if(temp->next==NULL)
     {
      cout<<temp->x;
     }
     else
     {
      cout<<"\t"<<temp->x;
     }
     temp=temp->next;
 }
}
void Student::create_list3()
{
 node *temp,*n;
 temp=n=NULL;
 cout<<"\n Enter the total no.of students in class who likre butterscotch ice cream:";
 cin>>cnt;
 for(int i=0;i<cnt;i++)
  {
   n=new node;
   cout<<"\n Enter the roll no of students:";
   cin>>num;
   n->x=num;
   n->next=NULL;
   if(head3==NULL)
   {
    head3=n;
    
   }
 else
{
 temp=head3;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp->next=n;
}
}

 temp=head3;
 while(temp!=NULL)
 {
     if(temp->next==NULL)
     {
      cout<<"\t"<<temp->x;
     }
     else
     {
      cout<<"\t"<<temp->x;
     }
     temp=temp->next;
 }
}
void Student::uni()
{
 node *temp3=NULL,*temp2=NULL;
 temp2=head2;
 temp3=head3;
 
 cout<<"\n Students who like vanilla or butterscotch:";
     while(temp2!=NULL)
	{
 	  cout<<temp2->x<<" ";
          temp2=temp2->next;
	}
     while(temp3!=NULL)
   {
     int flag=0;
     temp2=head2;
     while(temp2!=NULL)
         {
         if(temp3->x==temp2->x)
         { flag=1;      
             }
          temp2=temp2->next;
         }
	   
     if(flag==0)
     { 
     
       
       cout<<"  \t"<<temp3->x;
  }
      temp3=temp3->next;      
     }
     
}
void Student::intersect()
{
 node *temp2=NULL,*temp3=NULL;
 int flag=0;
 cout<<"\n The students who like vanilla and butterscotch:";
 for(temp3=head3;temp3!=NULL;temp3=temp3->next)
 {
  flag=0;
  for(temp2=head2;temp2!=NULL;temp2=temp2->next)
   {
    if(temp3->x==temp2->x)
     {
       flag=1;
       break;
      }
    }
    if(flag==1)
    {
      cout<<"\t"<<temp3->x;
    }
  }
       
}
void Student::onlyvanilla()
{
node *temp2=NULL,*temp3=NULL;
int flag=0;
cout<<"\n the roll no of students who like only vanilla ice creeam:";
for(temp2=head2;temp2!=NULL;temp2=temp2->next)
 {
  flag=0;
  for(temp3=head3;temp3!=NULL;temp3=temp3->next)
   {
    if(temp3->x==temp2->x)
     {
      flag=1;
      break;
     }
   }
  if(flag==0)
   {
    cout<<"\t"<<temp2->x;
    }
 }
}

void Student::onlybutterscotch()
{
 node *temp2=NULL,*temp3=NULL;
 int flag=0;
 cout<<"\n The roll no of students who like only butterscotch ice cream:";
 for(temp3=head3;temp3!=NULL;temp3=temp3->next)
  {
   flag=0;
   for(temp2=head2;temp2!=NULL;temp2=temp2->next)
    {
     if(temp2->x==temp3->x)
      {
       flag=1;
       break;
      }
    }
 if(flag==0)
 {
  cout<<"\t"<<temp3->x;
 }
}
}
void Student::neither_nor()
{
       
 node *temp=NULL,*temp3=NULL,*temp2=NULL;
 temp=head1;
 while(temp!=NULL)
 {
  temp3=head3;
  temp2=head2;
   int flag=0;
  while(temp3!=NULL&&temp2!=NULL)
        {
   
        if(temp->x==temp3->x||temp->x==temp2->x)
                {
                 flag=1;
                 }
        temp2=temp2->next;
         temp3=temp3->next;
         }
        if(flag==0)
                {
                 cout<<temp->x<<"\t";
                
                }
         
          temp=temp->next;
               
               
 }
}  
int main()
{
 Student s;
 int i,c=0;
    
          char ch;
       do{
          
          cout<<"\n  1.  Enter roll no of all students:  ";
          cout<<"\n  2.  Enter the rollno of student who like vanila";
          cout<<"\n  3.  Enter the roll no of student who like butterscotch";
          cout<<"\n  4.  Roll no student who like vanila or butterscotch";
          cout<<"\n  5.  Roll no student who like both vanila and butterscotch ";
          cout<<"\n  6.  Roll no student who like only vanila";
          cout<<"\n  7.  Roll no student who like only butterscotch";
          cout<<"\n  8.  Roll no student who neither like vanila nor butterscotch";
          cout<<"\n  9.  EXIT";
          cout<<"\n ENTER THE CHOICE::";
   
          cin>>i;
         switch(i)
         {        case 1:   s.create_list1();
                                  break;
          
                 case 2:   s.create_list2();
                                  break;
                  case 3:  s.create_list3();
                                  break;
                  case 4:  s.uni();
                                  break;
                  case 5:    s.intersect();
                                  break;
                  case 6:   s.onlyvanilla();
                                  break;
                  case 7:   s.onlybutterscotch(); 
                                  break;
		  case 8:   s.neither_nor();
				  break;
		 case 9:  c=9;
				  break;
                  default:  cout<<"\n INVALID CHOICE";
          }
            
        
       }while(c!=9);    

return 0;
}
