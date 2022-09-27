#include <iostream>
using namespace std;

int main(){
	for (int a=1 ; a<=5; a++){
		for (int b=a; b<=5; b++){ //nested for kerjakan yang dalam, yakni yg ini
			cout<<a<<" ";
		}
		cout<<endl;
	}
}