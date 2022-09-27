#include <iostream>
using namespace std;

int main(){
	string nama;

	cout<<"Masukkan nama anda = ";cin>>nama;
	getline(cin,nama);
	cout<<"Selamat, "<<nama<<", anda keren!";
	
	return 0;
}
