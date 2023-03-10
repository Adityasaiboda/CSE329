//stack using array
#include<iostream>
using namespace std;
int arr1[10];
static int top=0,q=0;
void push(){
int item;
if(top==-1){
cout<<"overflow";
}
else{
cout<<"enter element :";
cin>>item;
arr1[top]=item;
top++;
}
cout<<"\nTop= "<<top<<endl;
}
void display(){
for(int y=q;y<top;y++){
cout<<arr1[y]<<"\t";
}
}
void pop(){
for(int z=0;z<top;z++){
arr1[z]=arr1[z+1];
}
top--;
}

int main(){
int a;
while(1)
{

cout<<"enter choice";
cin>>a;
switch(a){
case 1: push();
break;
case 2: display();
break;
case 3: pop();
break;
default:cout<<"choose properly";
}
}}
