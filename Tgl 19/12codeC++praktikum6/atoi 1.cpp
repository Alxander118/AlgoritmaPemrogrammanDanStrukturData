#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char kata[20];
	float angka,a,b;
	cout<<"masukkan sembarang kata dan angka = ";
	cin>>kata;
	angka=atoi(kata);
	a=angka-7;
	cout<<"hasil angka di kurang 7 = "<<a;
	getchar();
}
