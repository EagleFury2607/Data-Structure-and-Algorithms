#include<iostream>
#include<stdlib.h>
using namespace std;

class job
{
	int j[10],t[10],i,total,n,start,rear,front;
	public:
	job()
	{
	rear=front=0;
	start=n=0;
	}
		void get();
		void display();
};

void job::get()
{
cout<<"Enter total no of job to be done\n";
cin>>n;
if(n<=10)
{
cout<<"Enter start time:\n";
cin>>start;
++rear;
cout<<"Enter compilation time of\n";
for(i=1;i<=n;i++)
{
j[i]=i;
cout<<"job "<<i<<":";
cin>>t[i];
cout<<"\n";
++front;
}
}
else
{
cout<<"Overflow enter less no of job\n";
}
}

void job::display()
{
for(i=1;rear<=front;i++)
{
cout<<"job "<<j[i]<<"\n";
cout<<"Start time:"<<start<<"\n";
cout<<"Compilation time:"<<t[i]<<"\n";
start=start+t[i];
cout<<"Total execution time:"<<start<<"\n";
++rear;
}
cout<<"Total time for execution of all jobs :"<<start<<"\n";
}

int main()
{
	job jo;
	jo.get();
	system("clear");
	jo.display();
	return 0;
}
