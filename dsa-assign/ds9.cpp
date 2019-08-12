#include<iostream>
using namespace std;
#define size 5
class stq
{
	int job,djob,r,f;
	int simq[size],prioq[size];
	public:
	stq()
	{
		r=f=-1;

		prioq[-1]=0;
	}
	int iffull()
	{
		if(r==size-1)
		return 1;
		else
		return 0;
	}
	int ifempty()
	{
		if((f==-1)||(f>r))
		return 1;
		else
		return 0;
	}
	void simpleadd();
	void simpledel();
	void simpleshow();
	void priorityadd();
	void prioritydel();
	void priorityshow();
};
void stq::simpleadd()
{
	cout<<"\n Enter the job number:";
	cin>>job;
	if(iffull())
	cout<<"\n Sorry queue is empty:";
	else
	
	{
		 if(f==-1)
		{
			f=r=0;
		simq[r]=job;
		
		}
		else
		{
			r++;
			simq[r]=job;
		}
	}
	
}
void stq::simpledel()
{
	if(ifempty())
	cout<<"\n Queue is empty:";
	else
{
	djob=simq[f];
	f++;
cout<<"\n Job deleted:"<<djob;
}
}
void stq::simpleshow()
{
	int t;
	for(t=f;t<=r;t++)
	{
		cout<<simq[t]<<"\t";
		
}
}
void stq::priorityadd()
{
	int t=0;
	cout<<"\n Enter the job number:";
	cin>>job;
	if(iffull())
	cout<<"\n Sorry queue is empty:";
	else 
	{
		if(f==-1)
		{
			f=r=0;
		prioq[r]=job;
		
		}
		else if(job<prioq[r])
		{
			t=r;
			while(job<prioq[t])
			{
				prioq[t+1]=prioq[t];
				t--;
			}
			t=t+1;
		
			prioq[t]=job;
			r++;
		}
		else
		{
		r++;
		prioq[r]=job;
		}
	}
}
void stq::prioritydel()
{
	if(ifempty())
	cout<<"\n Queue is empty:";
	else
{
	djob=prioq[f];
	f++;
cout<<"\n Job deleted:"<<djob;
}
}
void stq::priorityshow()
{
	int t;
	for(t=f;t<=r;t++)
	{
		cout<<prioq[t]<<"\t";
		
}
}
int main()
{
	stq s1;
	int ch,c=0,ch1,ch2,c1=0,c2=0;
	do
	{
		cout<<"\n 1.Operations on the simple queue:\n 2.Operation on the priority queue:\n3.exit:";
		cout<<"\n Enter the choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				do
				{
					cout<<"\n 1.Add job:\n2.Delete job:\n3.Show simple queue:\n4.Exit";
					cout<<"\n Enter the choice1:";
					cin>>ch1;
					switch(ch1)
					{
					case 1:
						s1.simpleadd();
						break;
					case 2:
						s1.simpledel();
						break;
					case 3:
						s1.simpleshow();
						break;
					case 4:
						c1=1;
						break;
						default:cout<<"\n Wromng choice:";
					}
				}while(c1==0);
				break;
			case 2:
				do
				{
					cout<<"\nPRIORITY QUEUE OPERATIONS:";
					cout<<"\n 1.Add job:\n2.Delete job:\n3.Show priority queue:\n4.Exit";
					cout<<"\n Enter the choice:";
					cin>>ch2;
					switch(ch2)
					{
					case 1:
						s1.priorityadd();
						break;
					case 2:
						s1.prioritydel();
						break;
					case 3:
						s1.priorityshow();
						break;
					case 4:
						c2=1;
						break;
						default:cout<<"\n Wromng choice:";
					}
				}while(c2==0);
				break;
			case 3:
					c=1;
					break;
			default:cout<<"\n Wromng choice:";
}}while(c==0);
return 0;
}
			
			
					
