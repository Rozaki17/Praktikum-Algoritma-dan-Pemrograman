#include <iostream>
#include <conio.h>

using namespace std;

int perpangkat(int a, int b){
	if(b == 0){
		return 1;
	}else{
		return a * perpangkat(a, b - 1);
	}
}

int faktorial(int a){
	 if(a == 1){
	 	return a;
	 }else{
	 	return a * faktorial(a - 1);
	 }
}


int main(){
	unsigned long int nilai, operasi, pangkat, hasil;
	
	cout << "==================================\n";
	cout << "PROGRAM FAKTORIAL DAN PERPANGKATAN";
	cout << "\n==================================\n";
	
	cout << "Masukkan Nilai yang ingin dicari : ";cin >> nilai;
	cout << "==================================\n";
	cout << "Ingin Mencari?\n";
	cout << "1. Faktorial\n2. Pangkat";
	cout << "\n==================================\n";
	cout << "Masukkan pilihan (masukkan angka) : ";
	cin >> operasi;
	cout << endl;
	
	switch(operasi){
		case 1:
			hasil = faktorial(nilai);
			cout << "Faktorial dari " << nilai << " = " << hasil; 
			break;
		case 2:
			cout << "Masukkan pangkat berapa : ";cin >> pangkat;
			hasil = perpangkat(nilai, pangkat);
			cout << endl << nilai << " pangkat " << pangkat << " = " << hasil; 
			break;
	}
	
	getch();
	return 0;
}
