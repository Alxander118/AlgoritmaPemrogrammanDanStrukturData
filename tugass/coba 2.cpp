#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int d = 2500, p = 2000, s = 1500;
    int b, bp;
    char jp;

    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "---------------------" << endl;
    cout << "Kode" << "\tJenis" << "\tHarga" << endl;
    cout << "---------------------" << endl;
    cout << "  " << "D" << "\tDada" << "\t" << "Rp." << d << endl;
    cout << "  " << "P" << "\tPaha" << "\t" << "Rp." << p << endl;
    cout << "  " << "S" << "\tSayap" << "\t" << "Rp." << s << endl;
    cout << "---------------------" << endl;
    cout << "Banyak Jenis : ";
    cin >> b;

    int totalHarga = 0;
    int totalHargaDada = 0, totalHargaPaha = 0, totalHargaSayap = 0;

    cout << "                    GEROBAK FIRED CHICKEN                          " << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "No." << "\tJenis" << "\t" << "\tHarga" << "\t" << "\tBanyak" << "\t" << "\tJumlah" << endl;
    cout << "  " << "\tPotong" << "\t" << "\tSatuan" << "\t" << "\tBeli" << "\t" << "\tHarga" << endl;
    cout << "---------------------------------------------------------------" << endl;

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
            totalHargaDada += harga;
        } else if (jp == 'P' || jp == 'p') {
            harga = p * bp;
            totalHargaPaha += harga;
        } else if (jp == 'S' || jp == 's') {
            harga = s * bp;
            totalHargaSayap += harga;
        }

        totalHarga += harga;
		pajak=10%
        cout << setw(2) << i << "\t" << jp << "\t\t" << "Rp." << setw(5) << harga << setw(10) << bp << "\t\t" << "Rp." << setw(5) << totalHarga << endl;
    }

    cout << "---------------------------------------------------------------" << endl;
    cout << "Total Harga Dada: Rp." << totalHargaDada << endl;
    cout << "Total Harga Paha: Rp." << totalHargaPaha << endl;
    cout << "Total Harga Sayap: Rp." << totalHargaSayap << endl;
    cout << "Total Harga Keseluruhan: Rp." << totalHarga << endl;

    return 0;
}

