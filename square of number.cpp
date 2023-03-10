#include <bits/stdc++.h>
using namespace std;
main()
{
	long int x;
	long int n;
	//cout<<"enter the value of the base";
	cin>>x;
	//cout<<"enter the value of the exponent";
	cin>>n;
	int y=x*x;
	double c =(n-1)/2;
	long int z=pow(y,c);
	int a=n/2;
	if (n%2==0)
	{
		cout<<x*z;
	}
	else {
		cout<<pow(y,a);
	}
	
}
