#include<iostream>
#define max 5
using namespace std;
struct tumpukanbuku{
	int top;
	int antrian[max];
}perpus;
void inisialisasi(){
	perpus,top=-1;
}
bool kondisikosong(){
	return perpus.top==-1;
}
bool kondisipenuh(){
	return perpus.top==max-1;
}
void inputdata(){
	if(kondisipenuh()){
		cout<<"\nantrianpenuh"<<endl
	}
}






void hapusdata(){
	if (kondisi kosong()){
		cout<<"\nantriankosong"<<endl;
	}
	else{
		cout<<"\nantrian"<<perpus.antrian[perpus.top]<<"telah di hapus"<<endl;
		perpus.top--;	
}
}
void tampildata(){
	if(kondisikosong()){
		cout<<"antriankosong";
	}
}












cout<<"\m1.masukkan data\n"
<<"2.hapus data\n"
<<"3.keluar\n"
<<"masukkan pilihan:";
cin>>pilihan;
switch (pilihan)








