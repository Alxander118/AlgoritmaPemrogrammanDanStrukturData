#include<iostream>
#include<string>
#include<iomanip>
 
using namespace std;
 
int main() {
    string Nama_Siswa;
    float I, II, III, nilaitotal, nilairatarata;
 
    cout << "Masukkan Nama Siswa/Siswi : ";
    cin >> Nama_Siswa;
    cout << "Masukkan NIlai Pertandingan I : ";
    cin >> I;
    cout << "Masukkan Nilai Pertandingan II : ";
    cin >> II;
    cout << "Masukkan Nilai Pertandingan III : ";
    cin >> III;
    nilaitotal = I + II + III;
    cout << "Nilai Total Adalah : " << fixed << setprecision(2) << nilaitotal << endl;
    nilairatarata = nilaitotal / 3;
    cout << "Nilai Rata-Rata Siswa atau Siswi adalah : " << fixed << setprecision(2) << nilairatarata << endl;
 
    if (nilairatarata >= 85) {
        cout << "Nama Siswa/Siswi : " << Nama_Siswa << endl;
        cout << "Dengan Nilai Rata-Rata : " << fixed << setprecision(2) << nilairatarata << endl;
        cout << "Hadiah Yang Didapat Adalah Computer Core i5" << endl;
    }
    else {
        if (nilairatarata >= 70) {
            cout << "Nama Siswa/Siswi : " << Nama_Siswa << endl;
            cout << "Dengan Nilai Rata-Rata : " << fixed << setprecision(2) << nilairatarata << endl;
            cout << "Hadiah Yang Didapat Adalah Uang Sebesar Rp.2.500.000" << endl;
        }
        else {
            cout << "Nama Siswa/Siswi : " << Nama_Siswa << endl;
            cout << "Dengan Nilai Rata-Rata : " << fixed << setprecision(2) << nilairatarata << endl;
            cout << "Hadiah Yang Didapat Adalah Hadiah Hiburan" << endl;
        }
    }
 
    //switch case
    {
        string nama_siswa;
        int a, b, c, nilaiRataRata, NilaiTotal;
        cout << "Masukkan Nama Siswa : ";
        cin >> nama_siswa;
        cout << "Masukkan NIlai Pertandingan I : ";
        cin >> a;
        cout << "Masukkan Nilai Pertandingan II : ";
        cin >> b;
        cout << "Masukkan Nilai Pertandingan III : ";
        cin >> c;
        cout << endl;
        NilaiTotal = a + b + c;
        nilaiRataRata = (NilaiTotal) / 3;
        switch (nilaiRataRata) {
            case 85 ... 100:
                cout << "Nama Siswa/Siswi : " << Nama_Siswa << endl;
                cout << "Dengan Nilai Rata-Rata : " << fixed << setprecision(2) << nilaiRataRata << endl;
                cout << "Hadiah Yang Didapat Adalah Computer Core i5" << endl;
                break;
            case 70 ... 84:
                cout << "Nama Siswa/Siswi : " << Nama_Siswa << endl;
                cout << "Dengan Nilai Rata-Rata : " << fixed << setprecision(2) << nilaiRataRata << endl;
                cout << "Hadiah Yang Didapat Adalah Uang Sebesar Rp.2.500.000" << endl;
                break;
            default:
                cout << "Nama Siswa/Siswi : " << Nama_Siswa << endl;
                cout << "Dengan Nilai Rata-Rata : " << fixed << setprecision(2) << nilaiRataRata << endl;
                cout << "Hadiah Yang Didapat Adalah Hadiah Hiburan" << endl;
                break;
        }
    }
 
    return 0;
}
