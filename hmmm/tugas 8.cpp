#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int d,p,s,b,bp,jk,i,j,jh;
	char jp;
	d=2500;
	p=2000;
	s=1500;
	cout<<"GEROBAK FRIED CHICKEN"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Kode"<<"\tJenis"<<"\tHarga"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"  "<<"D"<<"\tDada"<<"\t"<<"Rp."<<d<<endl;
	cout<<"  "<<"P"<<"\tPaha"<<"\t"<<"Rp."<<p<<endl;
	cout<<"  "<<"S"<<"\tSayap"<<"\t"<<"Rp."<<s<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Banyak Jenis : ";
	cin>>b;
for (int i = 1; i <= b; i++) {
        cout << "Jenis Ke - " << i << endl;
        cout << "Jenis Potongan [D/P/S]  : ";
        cin >> jp;
        
        if (!(jp == 'D' || jp == 'd' || jp == 'P' || jp == 'p' || jp == 'S' || jp == 's')) {
            cout << "Invalid jenis input. Please enter D, P, or S." << endl;
            i--;
            continue;
        }
         cout << "Banyak Potong           : ";
        cin >> bp;
}

cout<<"                    GEROBAK FIRED CHICKEN                          "<<endl;
cout<<"---------------------------------------------------------------"<<endl;
cout<<"No."<<"\tJenis"<<"\t"<<"\tHarga"<<"\t"<<"\tBanyak"<<"\t"<<"\tJumlah"<<endl;
cout<<"  "<<"\tPotong"<<"\t"<<"\tSatuan"<<"\t"<<"\tBeli"<<"\t"<<"\tHarga"<<endl;
cout<<"---------------------------------------------------------------"<<endl;
 int harga,hargad,hargas,hargap;
        if (jp=='D'||jp=='d'){
            harga=d*bp;
            hargad=harga;
        } else if (jp=='P'||jp=='p'){
            harga=p*bp;
            hargap=harga;
        } else if (jp=='S'||jp=='s'){
            harga=s*bp;
            hargas=harga;
        }
      cout<<setw(2)<<i<<"\t"<<jp<<"\t\t"<<"Rp."<<setw(5)<<harga<<setw(10)<<bp<<"\t\t"<<"Rp."<<setw(5)<<hargad<<endl;
       cout<<setw(2)<<i<<"\t"<<jp<<"\t\t"<<"Rp."<<setw(5)<<harga<<setw(10)<<bp<<"\t\t"<<"Rp."<<setw(5)<<hargap<<endl;
        cout<<setw(2)<<i<<"\t"<<jp<<"\t\t"<<"Rp."<<setw(5)<<harga<<setw(10)<<bp<<"\t\t"<<"Rp."<<setw(5)<<hargas<<endl;
cout<<"---------------------------------------------------------------"<<endl;
      
      

	
	
	
	return 0;
	
}


