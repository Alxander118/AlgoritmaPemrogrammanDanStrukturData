#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int a,b;
	char lagi;
	atas:
	cout<<"\nMasukan Bilangan = ";
	cin>>a;
	b=a%2;
	cout<<"nilai "<<a<<"%2"<<" adalah = "<<b;
	cout<<"\ningin hitung lagi? [Y/T] : ";
	lagi=getche();
	if(lagi=='Y'||lagi=='y')
	goto atas;
	if(lagi=='T'||lagi=='t')
	cout<<"\nTerima Kasih >.<";
	return 0;
	
}
