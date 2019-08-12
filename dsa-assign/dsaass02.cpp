#include<iostream>
using namespace std;
class matrix
{
 int i,j,k,l;
 int A[5][5],B[5][5],C[5][5];
 public:
 void getdata();
 void add();
 void sub();
 void mul();
 void transpose();
 void utm();
 void diagonal();
}; 
void matrix::getdata()
{
 cout<<"Enter the order of matrix:";
 cin>>k;
 cout<<"Enter elements of first Matrix:";
  for(i=0;i<k;i++)
   {
    for(j=0;j<k;j++)
     {
       cin>>A[i][j];
      }
    }
for(i=0;i<k;i++)
   {
    for(j=0;j<k;j++)
     {
       cout<<"\t"<<A[i][j];
      }
       cout<<"\n";
    }
      
 cout<<"Enter elements of second Matrix:";
 for(i=0;i<k;i++)
   {
    for(j=0;j<k;j++)
     {
       cin>>B[i][j];
      }
    }
  for(i=0;i<k;i++)
   {
    for(j=0;j<k;j++)
     {
       cout<<"\t"<<B[i][j];
      }
      cout<<"\n";
    }
   
  
}
void matrix::add()
{

 for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
     {
       C[i][j]=A[i][j]+B[i][j];
      }
  }

 cout<<"\nThe addition of two matrix A and B is:\n";

 for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
     {
       cout<<"\t"<<C[i][j];
      }
      cout<<"\n";
  }
 

}
void matrix::sub()

{
 for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
     {
       C[i][j]=A[i][j]-B[i][j];
      }
  }

 cout<<"\nthe subtraction of two matrix A and B is:\n";

 for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
     {
       cout<<"\t"<<C[i][j];
      }
   cout<<endl;
  }
 
}
void matrix::mul()
{
 
 
  
 for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
     {C[i][j]=0;
       for(l=0;l<k;l++)
        {
          C[i][j]=A[i][l]*B[l][j]+C[i][j];
         }
      }
   }
 
 cout<<"The Multiplication of two matrices is:";
 cout<<endl;

 for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
     {
       
            cout<<"\t"<<C[i][j];
        
       
    }
   cout<<"\n"; 

 }
}
void matrix::transpose()
{
 cout<<"Matrix A is\n";
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<A[i][j]<<"\t";
		}cout<<"\n";
	}

 
  for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
     {
      A[j][i]=A[i][j];
     }
   }
 
cout<<"Matrix B is\n";
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<"\t"<<B[i][j];
		}cout<<"\n";
	}


  for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
     {
      B[j][i]=B[i][j];
     }
   }
 
 cout<<"The transpose of matrix A is:"<<endl;
 
  for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
     {
      cout<<"\t"<<A[i][j];
     }
    cout<<endl;
   }
 
 cout<<"The transpose of matrix B is:"<<endl;
 
  for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
     {
      cout<<"\t"<<B[i][j];
     }
    cout<<endl;
   }
 
}
void matrix::utm()
{
int flag;
	cout<<"Matrix A is\n";
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<A[i][j]<<"\t";
		}cout<<"\n";
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(i>j)
			{
				if(A[i][j]==0)
				{
				flag=1;
				}
				else
				{
				flag=0;
				}
			}
		}
	}
	if(flag==1)
	{
	cout<<"Matrix is upper triangular\n";
	}
	else
	{
	cout<<"Matrix is not upper triangular\n";
	}
 
 cout<<"Matrix B is\n";
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<B[i][j]<<"\t";
		}cout<<"\n";
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(i>j)
			{
				if(B[i][j]==0)
				{
				flag=1;
				}
				else
				{
				flag=0;
				}
			}
		}
	}
	if(flag==1)
	{
	cout<<"Matrix is upper triangular\n";
	}
	else
	{
	cout<<"Matrix is not upper triangular\n";
	}
}
void matrix::diagonal()
{
int sum=0;
	cout<<"Matrix A is\n";
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<A[i][j]<<"\t";
		}cout<<"\n";
	}
	sum=0;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(i==j)
			{
				sum=sum+A[i][j];
			}
		}
	}
	cout<<"Sum is\t"<<sum<<"\n";
  
 cout<<"Matrix B is\n";
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<B[i][j]<<"\t";
		}cout<<"\n";
	}
	sum=0;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(i==j)
			{
				sum=sum+B[i][j];
			}
		}
	}
	cout<<"Sum is\t"<<sum<<"\n";	
}



int main()
{

 matrix m;
 m.getdata();
 m.add();
 m.sub();
 m.mul();
 m.transpose();
 m.utm();
 m.diagonal();
 return 0;
}
