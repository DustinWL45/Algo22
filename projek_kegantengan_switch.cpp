#include <iostream>
using namespace std;

int main(){
	int nilai;
	string nama;
	cout<<"Inputkan Nama Anda : "; cin>>nama;
	cout<<"Inputkan Nilai Kegantengan Anda : "; cin>>nilai;
	switch (nilai){
		case 1 ... 85: cout<<"Butuh Oplas";
		break;
		case 86 ... 100: cout<<"Anda Ganteng";
		break;
		default : cout<<"Anda Bukan Manusia"; //tidak bisa buat 2 pilihan, pilih salah satu
	}
	return 0;
}