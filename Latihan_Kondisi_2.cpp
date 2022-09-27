#include <iostream>
using namespace std;

int main(){
	string nama;
	int harga, jenis, lama, total;
	char sarapan;
	cout << "Hotel Bahagia" << endl;
	cout << "-------------------------------" << endl;
	cout << "1. VVIP (1.000.000)" << endl;
	cout << "2. VIP (750.000)" << endl;
	cout << "3. Standard (500.000)" << endl;
	cout << "4. Melati (250.000)" << endl;
	cout << "-------------------------------" << endl;
	cout << "Masukkan Nama Anda: "; cin >> nama;
	cout << "Masukkan Jenis Kamar (1-4): "; cin >> jenis;
	cout << "Masukkan Lama Inap: "; cin >> lama;
	cout << "Dengan Sarapan? (y/n) (Harga 50rb/hr): "; cin >> sarapan;
	cout << "-------------------------------" << endl;
	int ttlsr;
	int ttl;
	
	cout << "Terima kasih " << nama << endl;
	switch (jenis){
		case 1 : {
			cout << "Kamar anda VVIP \n"; harga = 1000000;
			
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan \n";
					   ttlsr = harga*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
			
			case 'n' : cout << "Lama menginap " << lama << " malam tanpa sarapan \n";
					   ttl = harga*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			
			default : cout << "Input tidak jelas, mungkin anda ingin menginap tanpa sarapan selama " << lama << " malam" << endl;
					  ttl = harga*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			}
			
			break;
		}
		
		case 2 : {
			cout << "Kamar anda VIP \n"; harga = 750000;
			
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan \n";
						ttlsr = harga*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
					   
			case 'n' : cout << "Lama menginap " << lama << " malam tanpa sarapan \n";
					   ttl = harga*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
					   
			default : cout << "Input tidak jelas, mungkin anda ingin menginap tanpa sarapan selama " << lama << " malam" << endl;
					   ttl = harga*lama;
					   cout << "Harga Kamar : " << ttl << endl;
		
			break;
			}
			
			break;
		}
		
		case 3 :{
			cout << "Kamar anda Standard \n"; harga = 500000;
			
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan \n";
					   ttlsr = harga*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
			
			case 'p' : cout << "Lama menginap " << lama << " malam tanpa sarapan \n";
					   ttl = harga*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			
            default : cout << "Input tidak jelas, mungkin anda ingin menginap tanpa sarapan selama " << lama << " malam" << endl;
					   ttl = harga*lama;
					   cout << "Harga Kamar anda : " << ttl << endl;
			break;
			}
			
			break;
		}
		
		case 4 : {
			cout << "Kamar anda Melati \n"; harga = 250000;
			
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan \n";
					   ttlsr = harga*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
					   
			case 'n' : cout << "Lama menginap " << lama << " malam tanpa sarapan \n";
					   ttl = harga*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
					   
			default : cout << "Input tidak jelas, mungkin anda ingin menginap tanpa sarapan selama " << lama << " malam" << endl;
					  ttl = harga*lama;
					  cout << "Harga Kamar : " << ttl << endl;
			break;
			}
			
			break;
		}
		
		default : cout << "Inputan Tidak Jelas. Permintaan anda tidak dapat diproses" << endl;
	}
	
	cout << "-------------------------------------------"<< endl;
	cout << "Terima kasih " << nama << " telah menginap di Hotel Bahagia" << endl;
	cout << "Semoga anda menikmati masa tinggal anda bersama kami";
}
