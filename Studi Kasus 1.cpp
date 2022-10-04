#include <iostream>
using namespace std;

int main(){
	for (int a = 10; a < 30; a++) {
		if (a % 2 == 0) {
			continue;
		}
		else if ( a == 21 || a == 27 ){
			continue;
		}
		cout << a << " ";
	}
}