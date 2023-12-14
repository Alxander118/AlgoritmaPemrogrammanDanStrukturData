#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
		{
		for(j=1;j<=6;j++)
		cout<<i;
		cout<<endl;
		}
//genap
{
	for(i=1;i<=10;i++)
		if(i%2==0)
		cout<<i<<endl;
}
//ganjil
{
	for(i=10;i>=1;i--)
		if(i%2!=0)
		cout<<i<<endl;
}
	return 0;
}

