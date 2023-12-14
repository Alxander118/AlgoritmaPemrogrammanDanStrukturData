#include <iostream>
using namespace std;

int main(){
    int a;

    cout<<"Masukkan Angka: ";
    cin>>a;

    if(a<=1){
    cout<<a<<" Bukan Bilangan Prima"<<endl;
    } 
	else
	{
    int i;
    for(i=2;i*i<=a;i++){
            if(a%i==0) {
            break;
            }
        }
		if(i*i>a){
        cout<<a<<" Adalah BIlangan Prima"<<endl;
        } else {
        cout<<a<<" Bukan Bilangan Prima"<<endl;
        }
    }

    return 0;
}
