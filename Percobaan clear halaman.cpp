#include <iostream>
using namespace std;

int main(){
	int pil;
	keren:
	 system("cls"); //utk clear halaman
	 cout<<"Masukkan pil: "; cin>>pil;
	 if (pil == 1){
	 	cout<<"Kamu keren"<<endl;
		 goto keren;
	 }
}