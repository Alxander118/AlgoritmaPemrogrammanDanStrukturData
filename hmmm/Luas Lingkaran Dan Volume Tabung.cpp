#include <iostream>
using namespace std;

int main(){
	cout<<"Menghitung Luas Lingkaran Bagian I"<<endl;
	
	float r,luas;
	
	cout<<"Masukkan jari-jari lingkaran = ";
	cin>>r;
	luas=3.14*r*r;
	cout<<"luas lingkaran ke-1 adalah = "<<luas<<endl;
	cout<<"==============================================="<<endl;
	cout<<"Menghitung Luas Lingkaran Bagian II"<<endl;
	
	float R,Luas;
	
	cout<<"Masukkan jari-jari lingkaran = ";
	cin>>R;
	Luas=3.14*R*R;
	cout<<"luas lingkaran ke-2 adalah = "<<Luas<<endl;
	cout<<"########################################################################################################################"<<endl;
cout<<"menghitung Volume tabung Bagian I"<<endl;
float jari_jari,tinggi,volume;
cout<<"Masukkan Jari-jari Tabung = ";
cin>>jari_jari;
cout<<"Masukkan Tinggi Tabung = ";
cin>>tinggi;
cout<<endl;
volume=(22.0/7.0)*tinggi*jari_jari*jari_jari;
cout<<"volume tabung ke-1 adalah = "<<volume<<endl;
cout<<"==================================================="<<endl;
cout<<"menghitung Volume tabung Bagian II"<<endl;
float Jari_Jari,Tinggi,Volume;
cout<<"Masukkan Jari-jari Tabung = ";
cin>>Jari_Jari;
cout<<"Masukkan Tinggi Tabung = ";
cin>>Tinggi;
cout<<endl;
Volume=(22.0/7.0)*Tinggi*Jari_Jari*Jari_Jari;
cout<<"volume tabung ke-2 adalah = "<<Volume<<endl;
return 0;
}
