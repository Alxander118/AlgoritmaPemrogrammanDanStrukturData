#include<iostream>
#define max 5
using namespace std;
struct tumpukanbuku{
	int top;
	int antrian[max];
}perpus;
void inisialisasi(){
	perpus,top=-1;
}
bool kondisikosong(){
	return perpus.top==-1;
}
bool kondisipenuh(){
	return perpus.top==max-1;
}
void inputdata(){
	if(kondisipenuh()){
		cout<<"\nantrianpenuh"<<endl
	}
}






void hapusdata(){
	if (kondisi kosong()){
		cout<<"\nantriankosong"<<endl;
	}
	else{
		cout<<"\nantrian"<<perpus.antrian[perpus.top]<<"telah di hapus"<<endl;
		perpus.top--;	
}
}
void tampildata(){
	if(kondisikosong()){
		cout<<"antriankosong";
	}
}












cout<<"\m1.masukkan data\n"
<<"2.hapus data\n"
<<"3.keluar\n"
<<"masukkan pilihan:";
cin>>pilihan;
switch (pilihan)

#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
int info;
node *next;
}*top,*newptr,*save,*ptr;
node *create_new_node(int);
void push(node*);
void display(node*);
int main()
{
int inf;
char ch='y'
}





















cout<<"\nmaaf tidak dapat menjalankan perintah\n";
cout<<"tekan tombol apa saja untuk keluar\n";
getchar();
exit(1);
}
push(newptr);
cout<<"\nantrian tumpukan saat ini:\n";
display(top);
cout<<"ingin menambah antrian?(y/n)";
cin>>ch;
}
getchar();
}
node*create_new_node(int x)
{
	ptr=new node;
}

return ptr;
}
void push(node *n)
{
if(top==null)
{
top=n;
}
else
{
save=top;
top=n;
n->next=save
}

