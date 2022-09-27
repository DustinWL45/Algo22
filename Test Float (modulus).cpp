#include <iostream>
using namespace std;

int main(){
	int a,b; float c; //terkadang, int tidak bisa menerima pecahan berkoma. Gunakan double
	cout<<"Masukkan Nilai a: "; cin>>a; //float tidak bisa utk modulus
	cout<<"Masukkan Nilai b: "; cin>>b;
	c = a % b;
	cout<<"Hasil Modulus: "<<c<<endl;
}