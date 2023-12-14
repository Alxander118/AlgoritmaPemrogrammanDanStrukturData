#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int d,p,s,b,bp,jk=1,i,j;
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
	int hargaall = 0, pajak, tb;
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

        int harga;
        if (jp == 'D' || jp == 'd') {
            harga = d * bp;
        } else if (jp == 'P' || jp == 'p') {
            harga = p * bp;
        } else if (jp == 'S' || jp == 's') {
            harga = s * bp;
        }
        hargaall+=harga;
   	
}
  	pajak=hargaall*(10/100);
tb=hargaall+pajak;
cout<<"                    GEROBAK FIRED CHICKEN                          "<<endl;
cout<<"---------------------------------------------------------------"<<endl;
cout<<"No."<<"\tJenis"<<"\t"<<"\tHarga"<<"\t"<<"\tBanyak"<<"\t"<<"\tJumlah"<<endl;
cout<<"  "<<"\tPotong"<<"\t"<<"\tSatuan"<<"\t"<<"\tBeli"<<"\t"<<"\tHarga"<<endl;
cout<<"---------------------------------------------------------------"<<endl;
cout << "Total"  << "\t" << "\t" << "\t" << "\t" << "\tRp." << setw(8) << hargaall << "\t" << "Rp." << setw(8) <<pajak << "\t\t" << "Rp." << setw(8) << tb << endl;
 

	return 0;
	
}


