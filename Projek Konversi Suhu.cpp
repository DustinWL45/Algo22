#include <iostream>
using namespace std;

int main(){
	int suhu, hasil;
	cout<<"Alat Konversi Suhu Fahrenheit ke Celcius"<<endl;
	cout<<"Masukkan Suhu (Fahrenheit) : "; cin>>suhu;
	hasil = ((suhu - 32) * 5 / 9);
	cout<<"Hasil Konversi Suhu : "<<hasil<<" C";
	
	return 0;
}