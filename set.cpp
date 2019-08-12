#include<iostream>
using namespace std;


int main()
{
int m,n,i,j;
int setA[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int setB[20];
int setC[20];

//READING VALUE FROM THE USER FOR CRICKET
cout<<"ENTER NO. OF STUDENT PLAYING CRICKET\n";
cin>>m;
cout<<"ENTER ROLL NO OF THE STUDENT PLAYING CRICKET\n";
for(i=0;i<m;i++)
{
cin>>setB[i];
} 

//READING VALUE FROM THE USER FOR BADMINTON
cout<<"ENTER NO. OF STUDENT PLAYING BADMINTON\n";
cin>>n;
cout<<"ENTER ROLL NO OF THE STUDENT PLAYING BADMINTON\n";
for(i=0;i<n;i++)
{
cin>>setC[i];
}


// CASE III
// STUDENT PLAYING CRICKET
cout<<"\n\nSTUDENTS PLAYING CRICKET";
for(i=0;i<m;i++)
{
cout<<"\n"<<setB[i];
}


// CASE IV
// STUDENT PLAYING BADMINTON
cout<<"\n\nSTUDENTS PLAYING BADMINTON";
for(i=0;i<n;i++)
{
cout<<"\n"<<setC[i];
}

// CASE I
////STUDENTS PLAYING EITHER CRICKET OR BADMINATON OR BOTH

int setX[20];
int setD[20];
int flag=0;
int c=0;
int f;

// COPYING setB IN setD
for(i=0;i<m;i++)
{
setD[i]=setB[i];
}

for (i=0;i<n;i++)
{
        for(j=0;j<m;j++)
                {
                if(setC[i]==setB[j])
                        {
                        flag=1;
           
                        }
                }                             
                        if(flag==0)
                        {
                         setD[m+c]=setC[i]; 
                         c++;
                         f=c;
                        } 
    flag=0;                         
            
}
cout<<"\n\nSTUDENTS PLAYING CRICKET OR BADMINTON OR BOTH\n";
for(i=0;i<m+f;i++)
{
cout<<"\n"<<setD[i];
setX[i]=setD[i];
}

//CASE II
//STUDENTS PLAYING BOTH CRIKCET AND BADMINTON

int setE[20];
int a=0;
int y;
for (i=0;i<n;i++)
{
        for(j=0;j<m;j++)
                {
                if(setC[i]==setB[j])
                        {
                        setE[a]=setC[i];
                        a++;
                        y=a; 
                        }
                }                             
}
 
 cout<<"\n\nSTUDENTS PLAYING BOTH CRICKET AND BADMINTON\n";
 for(i=0;i<y;i++)
 {
 cout<<"\n"<<setE[i];
 }
 

//CASE V
// STUDENTS NEITHER PLAYING CRICKET NOR BADMINTON
int setF[20];
int x=0;
for (i=0;i<20;i++)
{
        for(j=0;j<m+f;j++)
                {
                if(setA[i]==setX[j])
                        {
                        flag=1;
                        }
                }                       
                        if(flag==0)
                        {
                         setF[x]=setA[i]; 
                        x++;
                         y=x;
                        } 
    flag=0;                     
                                            
}
cout<<"\n\nSTUDENTS PLAYING NEITHER CRICKET NOR BADMINTON\n";
 for(i=0;i<y;i++)
 {
 cout<<"\n"<<setF[i];
 }

 // CASE VI
 // STUDENTS PLAYING ONLY CRIKCET
 
int setQ[20];
int v=0;
int q;
int flag1;
for (i=0;i<m;i++)
{
        for(j=0;j<n;j++)
                {
                if(setB[i]==setC[j])
                        {
                        flag1=1;
                        }
                }                       
                        if(flag1==0)
                        {
                         setQ[v]=setB[i]; 
                        v++;
                         q=v;
                        } 
    flag1=0;                     
                                            
}
cout<<"\n\nSTUDENTS PLAYING ONLY CRICKET\n";
 for(i=0;i<q;i++)
 {
 cout<<"\n"<<setQ[i];
 }
 
 
int setZ[20];
int z=0;
for (i=0;i<n;i++)
{
        for(j=0;j<m;j++)
                {
                if(setC[i]==setB[j])
                        {
                        flag1=1;
                        }
                }                       
                        if(flag1==0)
                        {
                         setZ[z]=setC[i]; 
                        z++;
                         q=z;
                        } 
    flag1=0;                     
                                            
}
cout<<"\n\nSTUDENTS PLAYING ONLY BADMINTON\n";
 for(i=0;i<q;i++)
 {
 cout<<"\n"<<setZ[i];
 } 
return 0; 
}
