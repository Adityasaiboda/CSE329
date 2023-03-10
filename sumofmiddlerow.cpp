#include<iostream>
using namespace std;
main ()
{
	int r1,c1,arr[3][3];
	//int arr[3][3] = { {2, 4, 1} , {2, 3, 9} , {3, 1, 8} };
	for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cin>>arr[i][j];
}
}
	
	
     
     
	int a=arr[0][1]+arr[1][1]+arr[2][1];
	int b=arr[1][0]+arr[1][1]+arr[1][2];
	cout<<"sum of middle row="<<a<<endl;
	cout<<"sum of middle column="<<b<<endl;

	}
