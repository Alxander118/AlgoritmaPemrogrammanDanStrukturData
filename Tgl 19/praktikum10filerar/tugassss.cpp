#include<iostream>
using namespace std;
	int tambahkanarray(const int *tambahkanarray,int ukuran){
	
		int hasil=0;
		for(int i=0;i<ukuran;i++)
		{
			hasil+=*tambahkanarray;
			tambahkanarray++;
	}
		return hasil;	
	}
	

int main()
{
	int ukuranArray;
	cout<<"masukkan ukuran array: ";
	cin>>ukuranArray;
	
	int arrayAngka[ukuranArray];
	cout<<"masukkan elemen array: "<<endl;
	for(int i=0;i<ukuranArray;++i){
		cout<<"elemen ke- "<<i+1<<":";
		cin>>arrayAngka[i];
	}
	int total=tambahkanarray(arrayAngka,ukuranArray);
	cout<<"hasil penjumlahan array: "<<total<<endl;
	return 0;
}

