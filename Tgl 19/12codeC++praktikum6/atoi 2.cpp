#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char kata[20];
	float angka,a,b;
	cout<<"masukkan sembarang kata dan angka = ";
	cin>>kata;
	angka=atoi(kata);
	a=angka+8;
	cout<<"hasil angka di tambah 8 adalah = "<<a;
	getchar();
}
