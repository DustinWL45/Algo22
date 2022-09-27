#include <iostream>
using namespace std;

int main(){
	string nama; int tgs, uts, uas, total;
	cout << "Masukkan Nama Anda   : "; cin >> nama;
	cout << "Masukkan Nilai Tugas : "; cin >> tgs;
	cout << "Masukkan Nilai UTS   : "; cin >> uts;
	cout << "Masukkan Nilai UAS   : "; cin >> uas;
	cout << "-----------------------" << endl;
	cout << "Selamat " << nama << endl;
	total = (tgs + uts + uas)/3;
	cout << "Nilai anda : " << total <<endl ;
	
	switch (total){
		case 0 ... 20 : {
			cout << "Nilai huruf : E" << endl;
			cout << "Predikat	 : Sangat Kurang" << endl;
			break;
		}
		case 21 ... 40 : {
			cout << "Nilai huruf : D" << endl;
			cout << "Predikat    : Kurang" << endl;
			break;
		}
		case 41 ... 60 : {
			cout << "Nilai huruf : C" << endl;
			cout << "Predikat    : Cukup"<< endl;
			break;
		}
		case 61 ... 80 : {
			cout << "Nilai huruf : B" << endl;
			cout << "Predikat 	 : Baik " << endl;
			break;
		}
		case 81 ... 100 : {
			cout << "Nilai huruf : A" << endl;
			cout << "Predikat    : Sangat Baik" << endl;
			break;
		}
		default : cout << "Terdapat kesalahan pada nilai, sehingga data tidak dapat diproses." << endl;
		break;
	}
}
