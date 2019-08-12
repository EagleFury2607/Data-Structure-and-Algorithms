#include<iostream>
using namespace std;


class matrix
{
	int a[5][5],b[5][5],c[5][5],i,j,o,k,flag,sum;
	

public:
	void get();
	void operate();
	void transpose();
	void utm();
	void diagonal();
};

void matrix::get()
{
	cout<<"Enter the order of matrix\n";
	cin>>o;
	cout<<"Enter first matrix\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Matrix A is\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cout<<a[i][j]<<"\t";
		}cout<<"\n";
	}
	cout<<"Enter second matrix\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Matrix B is\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cout<<b[i][j]<<"\t";
		}cout<<"\n";
	}
	
}

void matrix::operate()
{
	//Addition
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"Addition is\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cout<<c[i][j]<<"\t";
		}cout<<"\n";
	}
	//Subtract
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	cout<<"Subtraction is\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cout<<c[i][j]<<"\t";
		}cout<<"\n";
	}
	//Multiply
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			c[i][j]=0;
			for(k=0;k<o;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	cout<<"Multiplication is\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cout<<c[i][j]<<"\t";
		}cout<<"\n";
	}
}
void matrix::transpose()
{
	cout<<"Matrix A is\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cout<<a[i][j]<<"\t";
		}cout<<"\n";
	}
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			c[i][j]=a[j][i];
		}
	}
	cout<<"Transpose of Matrix A is\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cout<<c[i][j]<<"\t";
		}cout<<"\n";
	}
}

void matrix::utm()
{
	cout<<"Matrix A is\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cout<<a[i][j]<<"\t";
		}cout<<"\n";
	}
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			if(i>j)
			{
				if(a[i][j]==0)
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
	cout<<"Matrix A is\n";
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			cout<<a[i][j]<<"\t";
		}cout<<"\n";
	}
	sum=0;
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	cout<<"Sum is\t"<<sum<<"\n";	
}

int main()
{
matrix m;
m.get();
m.operate();
m.transpose();
m.utm();
m.diagonal();
return 0;
}
