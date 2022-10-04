#include <iostream>
using namespace std;

int main(){
	int pil,a,b,c;
	Cobalagi:
	cout<<"Kalkulator Canggih"<<endl;
	cout<<"<========================================>"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Masukkan pilihan anda (1-4):  "; cin>>pil;
	switch (pil){
		case 1: cout<<"Masukkan angka pertama: "; cin>>a;
		       cout<<"Masukkan angka kedua: "; cin>>b;
		       c = a + b;
		       cout<<"Hasil Penjumlahan = "<<c<<endl;
		       break;
		case 2: cout<<"Masukkan angka pertama: "; cin>>a;
		       cout<<"Masukkan angka kedua: "; cin>>b;
		       c = a - b;
		       cout<<"Hasil Pengurangan = "<<c<<endl;
		       break;
		case 3: cout<<"Masukkan angka pertama: "; cin>>a;
		       cout<<"Masukkan angka kedua: "; cin>>b;
		       c = a * b;
		       cout<<"Hasil Perkalian = "<<c<<endl;
		       break;
		case 4: cout<<"Masukkan angka pertama: "; cin>>a;
		       cout<<"Masukkan angka kedua: "; cin>>b;
		       c = a / b;
		       cout<<"Hasil Pembagian = "<<c<<endl;
		       break;
		default: cout<<"Kesalahan Input Terdeteksi, Mohon Pilih Pilihan 1-4"<<endl;
		       break;
	}
	char choice;
	cout<<"Coba lagi? (Y/T) : "; cin>>choice;
	cout<<"-----------------------------------------"<<endl;
	if (choice == 'y'||choice == 'Y'){
		goto Cobalagi;
	}
}