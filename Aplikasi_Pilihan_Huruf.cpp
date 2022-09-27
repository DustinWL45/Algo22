#include <iostream>
using namespace std;

int main(){
	char a;
	cout<<"Masukkan Huruf : "; cin>>a;
	switch (a){
		case 'a': cout<<"A"; break;
		case 'b': cout<<"B"; break;
		case 'c': cout<<"C"; break;
		case 'd': cout<<"D"; break;
		default: cout<<"Masukkan input yang benar!";
	}
}