#include <iostream>
using namespace std;

int main(){
	int angka;
	cout<<"Masukkan angka: "; cin>>angka;
	(angka % 2 == 0) ? (cout<<"Bilangan Genap" ) : (cout<<"Bilangan Ganjil") ;
}