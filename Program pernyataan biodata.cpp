#include <iostream>
using namespace std;

#define garis "------------------"

int main(){
	string nama;
	string umur;
	string prodi;
	string mata_kuliah;
	
	cout<<"Masukkan Nama Anda: ";
	getline(cin,nama);
	cout<<"Masukkan Umur Anda: ";
	getline(cin,umur);
	cout<<"Masukkan Prodi Anda: ";
	getline(cin,prodi);
	cout<<"Nama mata kuliah yang paling disukai: ";
	getline(cin,mata_kuliah);
	cout<<garis<<endl;
	
	cout<<"Saya "<<nama<<", umur "<<umur<<" tahun dari prodi "<<prodi<<" dengan ini menyatakan suka sekali dengan mata kuliah "<<mata_kuliah;
	
	return 0;
}