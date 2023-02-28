#include<iostream>
using namespace std;
	
main()
{
	int item,index=0,as;
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
	for(int i=0;i<as;i++)
	{
	   if(a[i]==item)
	   {
	   	index=i;
	   }
	}
	for(int i=index;i<as;i++)
	{
		a[i]=a[i+1];
		
	}
	
	
	for(int i=0;i<as-1;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
