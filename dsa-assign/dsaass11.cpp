#include<iostream>
using namespace std;
class Search
{
 int A[20];
  int n,k;
  public:
  Search()
  {
   n=0;
   }
  void get();
  void lsearch();
  void ssearch();
  void bsearch();
int fsearch();
};

void Search::get()
{
 int i;
 cout<<"\n Total NUmber of Students are attending program : ";
 cin>>n;
 cout<<"\n Enter Roll nO. of Students\n";
 for(i=0;i<n;i++)
 {
  cin>>A[i];
  
 }

 cout<<"\n Roll number of students who attain training program \n";
 for(i=0;i<n;i++)
 {
  cout<<A[i];
  cout<<"\t";
 }
}

void Search::lsearch()
{int flag=0;
 int i;
 int key;
 cout<<"\n Enter the roll no of student you want to search \n";
 cin>>key;
 for(i=0;i<n;i++)
 {
  if(A[i]==key)
  {
   flag=1;
   break;
  }
 }
 if(flag==1)
  cout<<"\n Student is Present for Program "; 
  else
   cout<<"\n Student is not Present for Program ";
 }


void Search::ssearch()
{
 int i=0;
 int key;
 cout<<"\n Enter the roll no of student you want to search \n";
 cin>>key;
 while(A[i]!=key&&i<n)
 {
  i++;
 }
 if(i<n)
 cout<<"\n Roll NO "<<A[i]<<" is attending program ";
 else 
 cout<<"\n Roll NO "<<A[i]<<" is not attending program ";
}

void Search::bsearch()
{
 int key;
 int i,j;
 int left,right,mid;
 int flag=0;
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
{ 
   if(A[j]>A[j+1])
  {
    k=A[j];
    A[j]=A[j+1];
    A[j+1]=k;
    
  }
 }
}
 cout<<"\n Sorted List is As follows \n";
 for(i=0;i<n;i++)
 {
  cout<<A[i]<<"\t";
 }
 cout<<endl;
 cout<<"\n Enter The roll no. of Student you want to search \n";
 cin>>key;
 left=0;
 right=n-1;
 
 while(left<=right)
 {
  mid=(left+right)/2;
  if(A[mid]==key)
  {
   flag=1;
   break;
  }
  else if(A[mid]>key)
  {
   
   right=mid-1;
  }
  else if(A[mid]<key)
  {
   left=mid+1;
  }
 }
 if(flag==1)
 cout<<"\n Student is present for program ";
 else
 cout<<"\n Student is not present for program";
}

int Search::fsearch()
{int flag=1;
 int mid,i,j;
 int k,key;
 int f1,f2,f,p,q;
int fib[]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377};
 
  for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
{  if(A[j]>A[j+1])
  {
    k=A[j];
    A[j]=A[j+1];
    A[j+1]=k;
    
  }
 }
}
 cout<<"\n Sorted List is As follows \n";
 for(i=0;i<n;i++)
 {
  cout<<A[i]<<"\t";
 }
 cout<<endl;
 cout<<"\n Enter Roll no of Student you want to search \n";
 cin>>key;
 while(flag)
 {
   if(fib[k]>=n&&fib[k-1]<n)
   {
   break;
   }
   k++;
 }
  mid=n-fib[k-2]+1;
  p=fib[k-2];
  q=fib[k-3];
  while(flag)
 {
  if(key<fib[mid])
   {
    if(q==0)
    cout<<"\n no Search Found \n";
    
    else
     {
      mid=mid-q;
      p=fib[k-3];
      q=fib[k-4];
      }
    }
   if(key==fib[mid])
   {
    cout<<"\n Search Found \n";
    break;
   }
  else if(key>fib[mid])
  {
   if(p==-1)
   cout<<"\n No Search Found \n";
   else
   {
    mid=mid+q;
    p=fib[k-4];
    q=fib[k-5];
   }
  }
}
}
int main()
{
 int ch,l=0;
 Search s;
 do
 {
 cout<<"\n 1-Take input \n 2 - Linear Search \n 3- Sentinel Search \n 4-Binary Search \n 5-Fibonacci Search \n6-Exit\n";
 cout<<"\n Enter Your Choice \n";
 cin>>ch;
 switch(ch)
 {
	case 1: 	
		s.get();
		break;
	case 2:
		s.lsearch();
		break;
	case 3:
		s.ssearch();
		break;
	case 4:
		s.bsearch();
		break;
	case 5:
		s.fsearch();
		break;
        case 6: l=1;
		break;
  default:cout<<"\n INVALID CHOICE";
 }

 }while(l!=1);
 return 0;
}
