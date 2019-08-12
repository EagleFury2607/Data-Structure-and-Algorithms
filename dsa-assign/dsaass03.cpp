#include<iostream>
using namespace std;
 class passowrd
{int count=0;
 char setA[6]={'1','3', 'a', 's', 't', 'i'};
public :
 void combinations();
};
void passowrd::combinations()
{

 for(int i=0;i<6;i++)
 {

  for(int j=0;j<6;j++)
  {
   for(int k=0;k<6;k++)
   {
    for(int l=0;l<6;l++)
    {
     cout<<setA[i]<<setA[j]<<setA[k]<<setA[l];
     cout<<"\n";
	count++;
    }

   }
  }


 }
 cout<<"\n Count ="<<count;
}
int main()
{
 passowrd p;
 p.combinations();
}
