#include<iostream>
using namespace std;

main()
{
	int as,mid=0,inital=0,end=0,item;
	cout<<"Enter array size"<<endl;
	cin>>as;
	cout<<"Enter elements array"<<endl;
	int a[as];
	for(int i=0;i<as;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter item"<<endl;
	cin>>item;
	end=as-1;
	mid=(end+inital)/2;
	while(inital<=end)
	{
		if(item==a[mid])
		{
			cout<<item<<"found"<<endl;
			break;
		}
		else if(item>a[mid])
		{
			inital=mid;
		}
		else
		{
			end=mid;
			mid=(inital+end)/2;
		}
	}
	
}
