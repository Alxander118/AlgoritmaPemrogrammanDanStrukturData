#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
    int info;
    node *next;
} *top, *newptr, *save, *ptr;
node *create_new_node(int);

void push(node *);
void display(node *);

int main(){
    int inf;
    char ch='y';
    top=NULL;

    while(ch=='y' || ch=='Y'){
        cout<<"masukkan node baru";
        cin>>inf;
    }
}

cout<<"\nMaaf.!!..tidak dapat menjalankan perintah..!!\n";
cout<<"Tekan tombol apa saja untuk keluar..\n";
getchar();
exit(1);
}
push(newptr);
cout<<"\nAntrian tumpukan saat ini :\n";
display(top);
cout<<"\nIngin menambah antrian ? (y/n)";
cin>>ch;
}
getchar();
}
node *create_new)node(int x){
    ptr = new node;
    ptr->info = x;
    ptr ->next = NULL;
    return ptr;
}
void push(node *n){
    if(top==NULL){
        top=n;
    }else{
        save = top;
        top = n;
        n->next = save;
    }
}

void display(node *n){
    while(n != NULL){
        cout<<n->info<<" -> ";
        n=n->next;
    }
    cout<<"!!\n";
}
#include <iostream>
using namespace std;

class Node{
    public;
    int value;
    Node* next;
};

int main(){
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    one = new Node();
    two = new Node();
    three = new Node();
    one->value = 1;
    two->value = 2;
    three->value = 3;
    one->next = two;
    two->next = three;
    three->next = NULL;
    head = one;
    while (head != NULL){
        cout << head->value;
        head = head->next;
    }
}
#include <iostream>
#define MAX 5
using namespace std;

struct TumpukanBuku{
    int antrian[MAX];
    int top;
}perpus;

void inisialisasi(){
    perpus.top = -1;
}

bool kondisiKosong(){
    return perpus.top == -1;
}

bool kondisiPenuh(){
    return perpus.top == MAX - 1;
}

void inputData(){
    if (kondisiPenuh()){
        cout<<"\nAntrian penuh"<<endl;
    }else{
        perpus.top++;
        cout<<"\nMasukkan Antrian = "; cin>>perpus.antrian[perpus.top];
        cout<<"Antrian "<<perpus.antrian[perpus.top]<<" Telah Masuk Ke Tumpukan Buku"<<endl;
    }
}

void hapusData(){
    if(kondisiKosong()){
        cout<<"\nAntrian Kosong\n"<<endl;
    }else{
        cout<<"\nAntrian "<<perpus.antrian[perpus.top]<<" Telah Di Hapus"<<endl;
        perpus.top--;
    }
}

void tampilData(){
    if(kondisiKosong()){
        cout<<"\nAntrian kosong";
    }else {
        cout<<"\nAntrian : ";
        for(int i=perpus.top; i>=0; i--)
        cout<<perpus.antrian[i]<<((i == 0) ? "" : ",");
    }
}

int main(){
    int pilihan;
    inisialisasi();

    do{
        tampilData();
        cout<<"\n1. Masukkan data\n"<<"2. Hapus Data\n"<<"3. Kelua\n"<<"Masukkan pilihan: ";
        cin>>pilihan;

        switch(pilihan){
            case 1:
            inputData();
            break;
            case 2:
            hapusData();
            break;
            default;
            cout<<"Pilihan tidak tersedia"<<endl;
            break;
        }
    }while(pilihan != 3);
}
#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
    int info;
    node *next;
} *top, *newptr, *save, *ptr;
node *create_new_node(int);

void push(node *);
void display(node *);

int main(){
    int inf;
    char ch='y';
    top=NULL;

    while(ch=='y' || ch=='Y'){
        cout<<"masukkan node baru";
        cin>>inf;
    }
}

cout<<"\nMaaf.!!..tidak dapat menjalankan perintah..!!\n";
cout<<"Tekan tombol apa saja untuk keluar..\n";
getchar();
exit(1);
}
push(newptr);
cout<<"\nAntrian tumpukan saat ini :\n";
display(top);
cout<<"\nIngin menambah antrian ? (y/n)";
cin>>ch;
}
getchar();
}
node *create_new)node(int x){
    ptr = new node;
    ptr->info = x;
    ptr ->next = NULL;
    return ptr;
}
void push(node *n){
    if(top==NULL){
        top=n;
    }else{
        save = top;
        top = n;
        n->next = save;
    }
}

void display(node *n){
    while(n != NULL){
        cout<<n->info<<" -> ";
        n=n->next;
    }
    cout<<"!!\n";
}
