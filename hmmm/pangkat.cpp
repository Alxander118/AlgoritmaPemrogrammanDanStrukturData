#include<iostream>
using namespace std;
	
int pangkat(int x,int y);
int main(){
int x,y;
cout<<"Menghitung pangkat dengan fungsi rekursif"<<endl;
cout<<"masukkan nilai x=";
cin>>x;
cout<<"masukkan nilai y=";
cin>>y;
cout<<endl;
cout<<x<<"  dipangkatkan  "<<y<<" = "<<pangkat(x,y)<<endl;
}
int pangkat(int x,int y){
	if(y==0)
		return 1;
	
	else
		return x*pangkat(x,y-1);
}


