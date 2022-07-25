#include <iostream>

using namespace std;

int main(){
	int kerja;
	float amer, ion, cal, sisa;
	float uang=110, pow=50, inap=3, oleh=240, kaz=159, meet=9000, gaji=10, potong=1250, tiket=99;
	
	
	cout << "\nUang mula-mula                       : " << uang << " pon";
	cout << "\nBiaya menginap per-malam di Poway    : " << pow << " ion";
	cout << "\nLama menginap di Poway               : " << inap << " hari";
	cout << "\nPengeluaran untuk membeli oleh-oleh  : " << oleh << " ion";
	cout << "\nBiaya ke Kazakhstan                  : " << kaz << " ion";       
	cout << "\nBiaya meet and greet dengan Dayana   : " << meet << " cal";
	cout << "\nGaji per-Hari Ijang bekerja          : " << gaji << " pon";
	cout << "\nPotongan gaji Ijang per-Hari         : " << potong << " cal";
	cout << "\nHarga tiket pulang ke Indonesia      : " << tiket << " pon";
	
	amer = ((pow*inap)/13)+(oleh/13)+(kaz/13);
	ion = amer*13;
	cal = ion*21;
	sisa = uang-(amer+(meet/21/13));
	kerja = (((tiket-sisa)*13)*21)/(((gaji*13)*21)-potong)+1;
		
	cout << "\n\nSisa uang mula-mula : " <<  sisa << " pon";
	
	cout << "\n\na. Rincian pengeluaran Ijang di Amerika : " << amer << " pon";
	cout << "|" << ion << " ion" << "|" << cal << " cal";
	cout << "\nb. Lama Ijang harus bekerja untuk mengumpulkan uang agar bisa pulang ke Indonesia : " << kerja << " hari";
	cout << "\nc. Potongan gaji Ijang : " << potong/21/13 << " pon";
	cout << "\n   Gaji kotor yang diterima : " << gaji << " pon";
	cout << "\nd. Tentu saja Ijang bisa pulang ke Indonesia, namun ia harus bekerja dulu ";
	cout << "selama 12 hari di Kazakhstan untuk mendapatkan   uang sehingga dia bisa membeli tiket pulang ke Indonesia";
	
	return 0;	
}
