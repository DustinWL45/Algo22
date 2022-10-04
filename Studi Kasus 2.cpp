#include <iostream>
using namespace std;

int main(){
	int suhu, hasil;
	cout<<"Masukkan Suhu yang diketahui (Celsius) : "; cin >> suhu;
	hasil = (suhu * 1.8 + 32);
	cout<<"Hasil Konversi Suhu Fahrenheit : "<<hasil<<" F"<<endl;
	
	return 0;
}