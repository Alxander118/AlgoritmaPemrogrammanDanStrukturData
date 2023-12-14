#include<iostream>
using namespace std;
int main(){

int a,b,c=0,d=0;
for(a=1;a<=20;a++){
	if(a%2==0){
		cout<<a<<" ";
		c+=a;
	}
}
cout<<c<<endl;
for(b=1;b<=20;b++){
	if(b%2!=0){
		cout<<b<<" ";
		d+=b;
	}
}
cout<<d;
}
