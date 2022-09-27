#include <iostream>
using namespace std;

int main(){
	int uts, uas, nilai;
	cout<<"Masukkan Nilai UTS : "; cin>>uts;
	cout<<"Masukkan Nilai UAS : "; cin>>uas;
	nilai = (uts + uas / 2);
	(nilai >= 60) ? (cout<<"LULUS") : (cout<<"TIDAK LULUS");
}