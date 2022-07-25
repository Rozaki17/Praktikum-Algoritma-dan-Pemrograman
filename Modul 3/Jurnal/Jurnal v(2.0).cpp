#include <iostream>
#include <conio.h>
using namespace std;
 
//fungsi genap
bool genap (int x){
	if (x%2 == 0){
		return true;
	}
	else{
		return false;
	}
}

//fungsi segitiga
bool segitiga(int x){
	if (x < 0){
		return false;
	}
	int jumlah = 0;
	for (int n = 1; jumlah <= x; n++){
		jumlah = jumlah + n;
		if (jumlah == x){
			return true;
		}
	}
	return false;
}

//fungsi jumlah pasien
int pasien(int a, int b){
	if (genap(b) == true){
		a = a - (a * 5/1000);
	}
	else{
		a = a - (a * 1/100);
	}
	
	if (segitiga(b) == true){
		a = a + (a * 3/1000);
	}
	else{
		a = a;
	}
	return a;
}

//fungsi utama
int main(){
	
	//deklarasi 
	char slash;
	int Tg, Bl, Th;
	
	//output
	cout << "Program menghitung pengurangan pasien covid 19" << endl;
	cout << "Tanggal sekarang 23 April 2021" << endl;
	cout << "Total pasien covid 19 : 1500000 " << endl;
	
	//input tanggal
	cout << "Masukan tanggal akhir yang ingin dicari : ";
	cin >> Tg >> slash >> Bl >> slash >> Th;
	
	//inisialisasi 
	int covid = 1500000;
	int T = 24, B = 4, TH = 2021;
	
	//menampilkan tanggal dan hasil
	while (TH <= Th){
		while (B <= 12){	
			while (T <= 30){
				
				//memanggil fungsi
				covid = pasien(covid, T);
				
				//menampilkan hasil
				cout << "Pasien covid pada tanggal " << T << " " << B << " " << TH;
				cout << " = " << covid << endl;
				
				T++;
				
				//mengecek tanggal
				if (TH == Th){
					if (B == Bl){
						if (T > Tg){
							getch();
							return 0;
						}
					}
				}
					
			}
			T = 1; //me-reset tanggal
			B++;
		}
		B = 1; //me-reset bulan
		TH++;
	}
	
	getch();
	return 0;
}

