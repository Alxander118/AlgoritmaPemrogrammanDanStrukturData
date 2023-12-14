#include<iostream>
using namespace std;

struct mhs
{
	char nama[20],nim[10],matkul[15];
	int sks;
};

mhs bayar[2];

int main(){
	int bts,var,tetap;
	var=500000;
	tetap=1000000;
	for(int i=0;i<2;i++)
{
	cout<<"\n\n-----------------------------------\n";
	cout<<"\nnama mhs      =";
	cin>>bayar[i].nama;
	cout<<"NIM             =";
	cin>>bayar[i].nim;
	cout<<"Jumlah SKS      =";
	cin>>bayar[i].sks;
	bts=tetap+(var*bayar[i].sks);
	cout<<"SPP tetap       ="<<tetap<<endl;
	cout<<"SPP variabel    ="<<var<<endl;
	cout<<"SPP Total       ="<<bts;
}
}
