#include<iostream>
using namespace std;
int main() {
	int am,bm,cm,ap,bp,cp,ak,bk,ck,i,arr[3][3];
	arr[0][0]=10;
	arr[0][1]=12;
	arr[0][2]=20;
	arr[1][0]=16;
	arr[1][1]=34;
	arr[1][2]=40;
	arr[2][0]=11;
	arr[2][1]=21;
	arr[2][2]=30;
	cout<<"HASIL PENJUALAN BARANG"<<endl;
	cout<<"Masukkan jumlah mouse tahun 2001 = "<<arr[1][0]<<endl;
	cout<<"Masukkan jumlah mouse tahun 2002 = "<<arr[1][1]<<endl;
	cout<<"Masukkan jumlah mouse tahun 2003 = "<<arr[1][2]<<endl;
	cout<<"Masukkan jumlah printer tahun 2001 = "<<arr[0][0]<<endl;
	cout<<"Masukkan jumlah printer tahun 2002 = "<<arr[0][1]<<endl;
	cout<<"Masukkan jumlah printer tahun 2003 = "<<arr[0][2]<<endl;
	cout<<"Masukkan jumlah kabel data tahun 2001 = "<<arr[2][0]<<endl;
	cout<<"Masukkan jumlah kabel data tahun 2002 = "<<arr[2][1]<<endl;
	cout<<"Masukkan jumlah kabel data tahun 2003 = "<<arr[2][2]<<endl;
	cout<<"NAMA BARANG"<<"\t"<<"2001"<<"\t"<<"2002"<<"\t"<<"2003"<<endl;
		cout<<"mouse"<<"\t"<<"\t"<<arr[1][0]<<"\t"<<arr[1][1]<<"\t"<<arr[1][2]<<endl;
		cout<<"printer"<<"\t"<<"\t"<<arr[0][0]<<"\t"<<arr[0][1]<<"\t"<<arr[0][2]<<endl;
		cout<<"kabel data"<<"\t"<<arr[2][0]<<"\t"<<arr[2][1]<<"\t"<<arr[2][2]<<endl;
	return 0;	
}

