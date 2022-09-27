#include <iostream>
using namespace std;

int main(){
	int pil;
	cout<<"Pilihan: "; cin>>pil;
	switch (pil){
		case 1: cout<<"Algoritma"<<endl; //bisa ditambahkan int dan kwn2 di case
				cout<<"dan"<<endl;
				cout<<"Pemrograman"<<endl;
				break;
		case 2: cout<<"Matematika"<<endl;
				cout<<"Diskrit"<<endl;
				break;
		default: cout<<"Bahasa"<<endl;
				 cout<<"Inggris"<<endl;			
	}
}