#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int barang, jumlah, uang, tot1=0, tot2=0, tot3=0;
	char merk;
	
	cout << "=============";
	cout << "\nPROGRAM KASIR\n";
	cout << "=============";
	cout << "\n\nMasukkan Jumlah Uang Anda : Rp."; cin >> uang;
	cout << "Jumlah Barang Belanjaan Anda : "; cin >> barang;
	
	for(int a = 1; a <= barang; a++){
		while(barang > 0){
			cout << "Barang " << a << " (merk --> A/B/C) : "; cin >> merk;
			cout << "Jumlah : "; cin >> jumlah;
			barang -= jumlah;
				if(merk == 'A')
					tot1 = 5000*jumlah;
				else if(merk == 'B')
					tot2 = 7500*jumlah;
				else if(merk =='C')
					tot3 = 9000*jumlah; 
		}
	}
			cout << "\n==============================";
			cout << "\nS T R U K  P E M B A Y A R A N\n";
			cout << "==============================";
			
			cout << "\nTotal Belanja Anda adalah Rp." << tot1+tot2+tot3;
			cout << "\nKembalian Anda Rp. " << uang -(tot1+tot2+tot3);
	
	getch();
	return 0;
}
