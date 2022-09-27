#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"nilai a: "; cin>>a;
	switch (a){ //switch hanya bisa menerima int dan char
		case 1: cout<<"satu"; break; //dlm case, tambahkan break di bagian akhir, jika tidak, semua pilihan akan dilakukan
		case 2: cout<<"dua"; break;
		default: cout<<"Bukan 1 atau 2"; //hanya jika 2 pilihan tidak termasuk
	}
}