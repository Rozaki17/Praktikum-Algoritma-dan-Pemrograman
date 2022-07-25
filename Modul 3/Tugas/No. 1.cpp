#include <iostream>
#include <conio.h>

using namespace std;

void kabisat(int a){
	if(a % 400 == 0){
		cout << a << " Termasuk Tahun Kabisat";
	}else if(a % 400 != 0 && a % 100 != 0 && a% 4 == 0){
		cout << a << " Termasuk Tahun Kabisat";
	}else{
		cout << a << " Bukan Termasuk Tahun Kabisat";
	}
}

int main(){
	float tahun;
	
	cout << "==============================\n";
	cout << "PROGRAM PENGECEK TAHUN KABISAT";
	cout << "\n==============================\n";
	
	cout << "Masukkan Sebuah Tahun : ";cin >> tahun;
	cout << endl;
	
	kabisat(tahun);
	
	getch();
	return 0;
}
