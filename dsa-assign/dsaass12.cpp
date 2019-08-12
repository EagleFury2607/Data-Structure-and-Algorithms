#include<iostream>
using namespace std;
class sorting
{
 float A[100];
 int n;
 public:
 sorting()
 {
  n=0;
 }
 void getdata();
 void insertion_sort();
 void shell_sort();
};

void sorting::getdata()
{
 int i;
 cout<<"\n Enter The Total Number of Students :";
 cin>>n;
 cout<<"\n Enter the Roll no of the students:";

 for(i=0;i<n;i++)
 {
  
  cin>>A[i];
  cout<<endl;
 }
}
void sorting::insertion_sort()
{
  int i,j,k;
  float temp;
  for(i=1;i<n;i++)
  {
   j=i-1;
   while(j>=0&&A[j]>A[j+1])
   {
    temp=A[j];
    A[j]=A[j+1];
    A[j+1]=temp;
    j--;
   }
  
 }
 

 cout<<"\n The student Percentage according to ascending order: \n";
 for(i=0;i<n;i++)
 {
  cout<<A[i]<<endl;
 }
}

void sorting::shell_sort()
{
  int gap ,i,j;
  for(gap=n/2;gap>0;gap=gap/2)
   {
    for(i=gap;i<n;i++)
     {
       float temp=A[i];
                 
            for (j=i;j>=gap && A[j-gap]>temp;j=j-gap)
             
   		   A[j]=A[j-gap];
   		   A[j]=temp;
       }
      }

  cout<<"\n The Percentage of student in ascending order is: \n";
  for(i=0;i<n;i++)
  {
   cout<<A[i]<<endl;
  }
  
  cout<<"\n Top 5 scores are :\n";
  for(int i=n-1;i>=n-5;i--)
  {
   cout<<A[i]<<"\t";
  }
}       

int main()
{
 int ch,d=0;
 sorting s;
 do{
   cout<<"\n1-Get Percentage \n 2-Sorting using Insertion sort \n 3-Sorting using shell sort \n4- Exit";
   cout<<"\n Enter your choice :";
   cin>>ch;
 switch(ch)
 {
   case 1:
    		s.getdata();
		break;
   case 2:
		s.insertion_sort();
		break;
   case 3:
		s.shell_sort();
		break;
   case 4:      d=1;
                break;
 }
 
 }while(d!=1);
  return 0;
}
