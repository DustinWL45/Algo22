#include <iostream>
using namespace std;

int main() {
char jawab;
int a, b, hasil;
	
	do {
	cout << "Masukkan Bilangan Pertama : ";
	cin >> a;
	cout << "Masukkan Bilangan Kedua : ";
	cin >> b;
	hasil = (a + b);
	cout << "Hasil Penjumlahan Adalah : " << hasil << endl;
	cout <<endl<< "Coba lagi (Y/T) ? "; cin >> jawab;	
	}
	while (jawab == 'y' || jawab == 'Y');
}