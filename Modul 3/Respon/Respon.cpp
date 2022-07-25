#include <iostream>

using namespace std;

void warning(){
	cout << "JENIS BARANG TIDAK SESUAI!!!";
}

bool genap(int a){
	if(a % 2 == 0){
		return true;
	}else{
		return false;
	}
}

int price(int a, int &b){
	if(a == 0){
		return b;
	}else{
		if(genap(a) == true){
			b += 3000;
			return price(a - 1, b);
		}else{
			b += 7000;
			return price(a - 1, b);
		}
	}
}

int main(){
	int jenis, jumlah, harga;
	
	cout << "===============================\n";
	cout << "PROGRAM PENGHITUNG HARGA BARANG";
	cout << "\n===============================\n";
	cout << "Daftar Harga dan Pilihan Barang\n";
	cout << "1. Sabun\t: Rp.7500\n2. Air Botol\t: Rp.3500\n3. Cokelat\t: Rp.17000";
	cout << "\n===============================\n";
	
		cout << "Ingin membeli barang yang mana?\n";
		cout << "Masukkan Pilihan(1/2/3) : ";cin >> jenis;
		cout << "Banyak Ingin Membeli : ";cin >> jumlah;
		
	switch(jenis){
		case 1:
			harga = 7500;
			break;
		case 2:
			harga = 3500;
			break;
		case 3:
			harga = 17000;
			break;
		default:
			warning();
			break;
	}			
	
	if(jenis == 1 || jenis == 2 || jenis == 3){
		harga *= jenis;
		price(jenis, harga);
		
		cout << "Total Belanja Anda (Sudah Termasuk Pajak) adalah Rp." << harga;
	}
	
	return 0;
}
