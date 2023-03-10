#include<iostream>
#include<cmath>
using namespace std;


long int exp( long int x, long int n){

int N=1000000007;
if(n==0) return 1;

if(n==1) return x%N;

long int t =exp(n,x/2);
t=(t*t)%N;

if(n%2!=0) return ((x%N)*t)%N;
else return t ;

}
int main(){

long int x;
long int n ;
cout<<"Enter the value of base:=";
cin>>x;
cout<<"enter the value of expo:=";
cin>>n;
long int result=exp(x,n);
cout<<result;
return 0;

}
