�PNG

   IHDR      A   :�?J   sBIT|d�   	pHYs  �  �7�˭   _IDATX���1�@D����xm�occ�J\󧢀G�̣ u�kw� {�m��^".........~��o�^î�g�^@�j� ���ta�
�    IEND�B`�                                                                                                                                                                                                                                                                                                                                   ut<<a[i]<<"\t";
		cout<<"\n";
		}
		void linear();
		void sentinel();
		void binary();
};

void search::linear()
{
	cout<<"Enter the roll no. you want to search:\n";
	cin>>item;
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
		cout<<"Roll no. is found at "<<i+1<<"th position.\n";
		}
	}
}

void search::sentinel()
{
	cout<<"Enter the roll no. you want to search:\n";
	cin>>item;
	last=a[n-1];
	if(a[n-1]==item)
	cout<<"Roll no. is found at "<<i+1<<"th position.\n";
	else
	{
	a[n-1]=item;
	i=0;
	while(a[i]!=item)
	i++;
	if(i<n-2)
	cout<<"Roll no. is found at "<<i+1<<"th position.\n";
	else
	cout<<"Roll no. was not present\n";
	}
}

void search::binary()
{

}

int main()
{
search s;
int ch;
s.get();
s.sort();
do
{
cout<<"1) Linear search \n2) Sentinel search \n3) Binary search\n4) EXIT\n";
cout<<"Enter your choice:\n";
cin>>ch;
switch(ch)
{
case 1: s.linear();
break;
case 2: s.sentinel();
break;
case 3: s.binary();
break;
case 4: exit(EXIT_SUCCESS);
break;
}
}while(ch!=4);
return 0;
}
