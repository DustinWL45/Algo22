#include <iostream>
using namespace std;

int main(){
	int c, f, pil;
	char yn;
	atas:
	cout<<"Pilihan : "<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"1. Celcius ke Fahrenheit"<<endl;
	cout<<"2. Fahrenheit ke Celcius"<<endl;
	cout<<"Masukkan Pilihan Anda (1 & 2) : "; cin>>pil;
	switch (pil){
		case 1 : cout<<"Masukkan Suhu : "; cin>>c;
				 f = c * 1.8 + 32;
				 cout<<"Hasil Konversi : "<<f<<" F"<<endl;
				 break;
		case 2 : cout<<"Masukkan Suhu : "; cin>>f;
				 c = (f - 32) * 5 / 9;
				 cout<<"Hasil Konversi : "<<c<<" C"<<endl;
				 break;
		default : cout<<"Input yang dimasukkan salah, tolong coba lagi"<<endl;	 
	}
	cout<<"Coba lagi? (Y/T) "; cin>> yn;
	cout<<"==================================="<<endl;
	if (yn == 'y'|| yn == 'Y'){
		goto atas;
	}
	
}