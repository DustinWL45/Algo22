#include <iostream>
using namespace std;

#define garis "----------------"

int main(){
	string nama;
	string barang;
	int harga; //flow tidak bisa dilakukan operasi mtk, gunakan int
	int jumlah;
	int total;
	
	cout<<"Masukkan Nama Pelanggan : ";
	getline(cin,nama);
	cout<<"Masukkan Nama Barang : ";
	getline(cin,barang);
	cout<<"Masukkan Harga Barang : ";
	cin>>harga; //utk int, tdk perlu getline, getline hanya utk string
	cout<<"Masukkan Jumlah Beli : ";
	cin>>jumlah; // lambang >> pada cin artinyq input data oleh user
	cout<<garis<<endl;
	
	cout<<"Barang yang anda beli adalah :"<<barang<<endl; //endl utk enter
	cout<<"Dengan harga : "<<harga<<endl;
	total = jumlah * harga;
	cout<<"Total Bayar : "<<total<<endl; //ketika selesai perhitungan dan lanjut ke perbandingan, jgn lupa end dgn endl
	 (total > 500000) ? (cout<<"Bonus : Payung Cantik"<<endl) : (cout<<"Bonus : Terima Kasih"<<endl);
	cout<<"--Terima Kasih "<<nama<<" --";

	return 0;
}