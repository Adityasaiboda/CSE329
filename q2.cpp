#include<iostream>
using namespace std;
sorting(int a[],int c)
{
    for(int i=0;i<c;i++)
		{
			for(int j=i;j<c;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
				
			}
		}
		}	
}
rearrange(int a[],int c)
{
	int temp[c],nnum=0,pnum=0;
	for(int j=0;j<c;j++)
		{
			if(a[j]<0)
			{
				nnum=nnum+1;
			}
			
			
		}
		pnum=nnum+1;
	for(int i=1;i<c;i=i+2)
	{
		for(int j=0;j<nnum;j++)
		{
			temp[i]	=a[j];
		}
    }
    for(int j=0;j<c;j++)
		{
			cout<<temp[j]<<endls;
			
		}
}
main()
{
    int c;
	cin>>c;
	int a[c];
	
		for(int j=0;j<c;j++)
		{
			cin>>a[j];
			
		}
		sorting(a,c);
		rearrange(a,c);
		
}
