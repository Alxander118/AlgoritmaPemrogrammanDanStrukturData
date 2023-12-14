#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x;
	cout<<"Masukkan NPM anda: ";
	getline (cin,x);
	string y;
	cout<<"Masukkan nama anda: ";
	getline (cin,y);
	string z;
	cout<<"Masukkan alamat anda: ";
	getline (cin,z);
	cout<<"NPM anda adalah : "<<x;
	cout<<"\nNama anda adalah : "<<y;
	cout<<"\nAlamat anda adalah : "<<z;
	return 0;
}
