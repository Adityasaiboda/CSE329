#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
        {
	          	cin>>a[i][j];
	    }
	}
	int f=n/2;
	int sum_r=0;
	
	int sum_c=0;
	for(int i=f;i<=f;i++)
	{
		for(int j=0;j<n;j++)
        {
	          	sum_r=sum_r+a[i][j];
	          	sum_c=sum_c+a[j][i];
	    }
	    
	}
	
	cout<<sum_r<<endl<<sum_c;
}
