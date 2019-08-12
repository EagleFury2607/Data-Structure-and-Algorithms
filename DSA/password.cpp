#include<iostream>
using namespace std;
class pass
{public:
	char a[6]={'1','3','a','s','t','i'};
	int i,j,k,l,cnt;
	public:
	pass()
	{
	cnt=0;
	}
	
	void password();
	void count();
};
void pass::password()
{
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			for(k=0;k<6;k++)
			{
				for(l=0;l<6;l++)
				{
					if(a[i]!=a[j]&&a[i]!=a[k]&&a[i]!=a[l]&&a[j]!=a[k]&&a[j]!=a[l]&&a[k]!=a[l])
					{
						cout<<a[i]<<"\t"<<a[j]<<"\t"<<a[k]<<"\t"<<a[l]<<"\t";
						cnt++;
						cout<<"\n";
					}
				}
			}
		}
	}
}
void pass::count()
{
	cout<<"Total no of combination are "<<cnt;
}
int main()
{
pass p;
p.password();
p.count();
return 0;
}

