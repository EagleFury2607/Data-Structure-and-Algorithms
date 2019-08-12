


#include<iostream>
#include<stdlib.h>
using namespace std;

class sort
{
	float e,a[20],d[20];
	int i,j,k,n;
	public:
	
		sort()
		{
		e=0;i=j=n=k=0;
		for(i=0;i<20;i++)
		{
			d[i]=a[i]=0;
		}
		}
		void insertion();
		void shell();
		void disp();
};

void sort::insertion()
{
	cout<<"Enter no of students:\n";
	cin>>n;
	i=0;
	while(i<n)
	{
		cout<<"Enter the percentage of student:\n";
		cin>>e;
		while(e<a[k])
		{k++;}
		for(j=i;j>=k;j--)
		{a[j+1]=a[j];}				
		a[k]=e;
		i++;
		k=0;
	}
	for(i=n;i>0;i--)
	cout<<a[i-1]<<"\n";
	for(i=n;i>n-5;i--)
	d[i]=a[i];
} 

void sort::shell()
{
	cout<<"Enter no of students:\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the percentage of student:\n";
		cin>>a[i];
	}
	int gap=n/2;
	while(gap>0)
	{
		
		for(i=gap;i<n;i++)
		{
			for(k=i-gap;k>=0;k=k-gap)
			{
				if(a[k]>a[gap+k])
				{
				float temp;
				temp=a[k];
				a[k]=a[k+gap];
				a[gap+k]=temp;
				}
			}
		}

		gap=gap/2;
	}
	cout<<"\n\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\n";
	for(i=n;i>n-5;i--)
	d[i]=a[i];
}

void sort::disp()
{
for(i=n-1;i>n-6;i--)
cout<<d[i]<<"\n";
}

int main()
{	
	sort s;
	int x;
	do
	{
		cout<<"\nThis program sort percentage of students in ascending order\n";
		cout<<"Enter your choice";
		cout<<"\n\n1.Insertion sort\n2.Shell sort\n3.Display top 5 percentage\n4.EXIT\n";
		cin>>x;
		switch(x)
		{
			case 1:s.insertion();break;
			case 2:s.shell();break;
			case 3:s.disp();break;
			case 4: exit(EXIT_SUCCESS);
		}
	}
	while(x!=4);
	return 0;
}
