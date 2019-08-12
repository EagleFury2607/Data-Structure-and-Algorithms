#include<iostream>
using namespace std;
class bfs
{
	int rear,front,a[10][10],i,n,x[100],y[100],j,k,l,b[100];
	public:
	bfs()
	{
	front=0;
	rear=0;
	}
		void get();
		void queue();
		void display();
};

void bfs::get()
{
	cout<<"enter no of nodes in tree(n<10)\n";
	cin>>n;
	cout<<"your array will look like:  (row to column)\n";
	cout<<"\t";
	for(i=1;i<=n;i++)
	cout<<i<<"\t";
	cout<<"\n";
	for(i=1;i<=n;i++)
	cout<<i<<"\n";
	cout<<"enter location of which you want the connectivity as row column\nenter -1 to exit\n";
	i=1;
	do
	{
		if(x[i-1]==-1)
		break;
		else
		{
		cin>>x[i]>>y[i];
		i=i+1;
		}
	}while(x[i-1]!=-1);
	k=i;
		
}

void bfs::queue()
{l=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(l<k)
		{
			if((x[l]==i)&&(y[l]==j))
			{a[i][j]=1;l++;}
			else
			a[i][j]=0;
			
		}
		}
	}
	cout<<"Your connections\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\n";
	i=1;j=2;
	int c=2;
	b[rear]=1;
	cout<<b[rear];
	rear=rear+1;
	
for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i<j)
			{
			if(a[i][j]==1)
			{
			b[rear]=c;
			cout<<b[rear];
			c=c+1;
			rear=rear+1;
			}
			s}
		}
		front=front+1;
	}
cout<<"\nrear= "<<rear;
cout<<"\nfront= "<<front;
cout<<"\n";
}

int main()
{
	bfs b;
	b.get();
	b.queue();
	return 0;
}
