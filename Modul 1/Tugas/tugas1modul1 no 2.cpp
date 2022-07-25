#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int tgl, bln, thn, tgls, blns, thns;
	
	
	cout << "Masukkan Tanggal sekarang\t: "; cin >> tgls;
	cout << "Masukkan Bulan sekarang\t\t: "; cin >> blns;
	cout << "Masukkan Tahun sekarang\t\t: "; cin >> thns;
	
	cout << "\nMasukkan Tanggal lahir\t: "; cin >> tgl;
	cout << "Masukkan Bulan lahir\t: "; cin >> bln;
	cout << "Masukkan Tahun lahir\t: "; cin >> thn;
	
	cout << "\nUsia Anda\t\t: " << thns-thn << " Tahun " << blns-bln << " Bulan " << tgls-tgl << " Hari";
	
	getch();
	return 0;
}
