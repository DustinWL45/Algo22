#include <iostream>
using namespace std;

int main(){
	char nama[20]; //untuk bagian no 8 //bisa diganti "string nama;"
	
	cout<<"Masukkan nama anda = ";cin>>nama; //jika menggunakan string, jgn lupa tambahkan "getline(cin,nama);"
	cout<<"Selamat, "<<nama<<", anda keren!"; // karna char utk no 5, membuat bagian nama mengikuti nama yg diinputkan
	
	return 0;
}
//fungsi char hanya menampilkan kata pertama, getline menampilkan semua
