#include <iostream>
using namespace std;
class game
{
    int c,b,m,i,j,k,cnt;
    int setA[10],setB[10],setC[20],setD[20],setAB[20];
    public:
    game()
    {
        c=b=m=0;
        i=j=k=0;
        cnt=0;
    }
    void getdata();
    void show();
    void uni();
    void ninor();
    void common();
    void onlycrick();
    void onlybadminton();
};
void game::getdata()
{
    cout<<"\nHow many students in SE Comp :";
    cin>>m;
    cout<<"\nEnter count of student who plays cricket:";
    cin>>c;
    for(i=0;i<c;i++)
    {
        cout<<"\nEnter the roll no:";
        cin>>setA[i];
    }
    cout<<"\nEnter count of student who plays badminton:";
    cin>>b;
    for(i=0;i<b;i++)
    {
        cout<<"\nEnter the Roll No:";
        cin>>setB[i];
    }
}
void game::uni()
{
    int flag=0;
    for(i=0;i<c;i++)
    {
        setC[k]=setA[i];
        k++;
    }
    for(j=0;j<b;j++)
    {
        for(i=0;i<c;i++)
        {
            if(setB[j]==setA[i])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            setC[k]=setB[j];
            k++;
        }
        flag=0;
    }
    cout<<"\nThe Student who plays either Cricket or Badminton\n";
    for(i=0;i<k;i++)
    {
        cout<<"\t"<<setC[i];
    }
}

void game::common()
{
    for(i=0;i<c;i++)
    {
     setC[k]=setA[i];
     k++;
    }
    cout<<"\nThe student who plays both...\n";
    for(j=0;j<b;j++)
    {
     for(i=0;i<c;i++)
     {
      if(setB[j]==setA[i])
      {
        cout<<"\t"<<setA[i];
      }
     }
    }
}

void game::ninor()
{ int flag=0;
    int z;
    for(i=0;i<k;i++)
    {
        setD[cnt]=setC[i];
        cnt++;
    }
   cout<<"\n\nThe Student who plays neither Cricket nor Badminton...\n";
   flag=0;
   for(i=1;i<=m;i++)
   {
    for(j=0;j<cnt;j++)
    {
     if(setD[j]==i)
     {
      flag=1;
     }
    }
    if(flag==0)
    {
     setAB[z]=i;
     cout<<"\t"<<i;
     z++;
    }
    flag=0;
   }
}
void game::onlycrick()
{
    int flag=0;
    cout<<"\nThe student only plays Cricket...\n";
    for(i=0;i<c;i++)
    {
        for(j=0;j<b;j++)
        {
            if(setA[i]==setB[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"\t"<<setA[i];
        }
        flag=0;
    }
}

void game::onlybadminton()
{
    int flag=0;
    cout<<"\nThe student only plays Badminton...\n";
    for(j=0;j<b;j++)
    {
        for(i=0;i<c;i++)
        {
            if(setB[j]==setA[i])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"\t"<<setB[j];
        }
        flag=0;
    }
}
void game::show()
{
    cout<<"\nThe students who plays Cricket as follows..\n";
    for(i=0;i<c;i++)
    {
        cout<<"\t"<<setA[i];
    }
    cout<<"\nThe students who plays Badminton as follows..\n";
    for(j=0;j<b;j++)
    {
        cout<<"\t"<<setB[j];
    }
}
int main()
{
    game g;
    int ch;
   
     g.getdata();
     g.show();
     g.uni();
     g.ninor();
     g.common();
     g.onlycrick();
     g.onlybadminton();
   

    cout << "\n!!!Hello World!!!" << endl; // prints !!!Hello World!!!
    return 0;
}
