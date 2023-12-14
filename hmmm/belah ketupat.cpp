#include<iostream>
using namespace std;
int main(){
	int a,i,j,k;
	cout<<"masukkan lebar belah ketupat : ";
	cin>>a;
	cout<<endl;
	
	for(i=1;i<=a;i++){
		for(j=1;j<=a-i;j++){
			cout<<" *";
		}
		 for(k=1;k<=4*i-1;k++){
            cout<<" ";
   		}
		for(j=1;j<=a-i;j++){
			cout<<" *";
		}
		cout<<endl;
		}
	for(i=a-1;i>=1;i--){
		for(j=1;j<=a-i;j++){
			cout<<" *";
		}
		for(k=1;k<=4*i-1;k++){
			cout<<" ";
		}
		for(j=1;j<=a-i;j++){
			cout<<" *";
		}
		cout<<endl;
		}
return 0;
}
