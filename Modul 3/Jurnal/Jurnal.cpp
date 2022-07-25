#include <iostream>
#include <conio.h>

using namespace std;

int triangle = 0;

bool genap(int a) {
	if(a % 2 == 0)
		return true;
	else
		return false;
}

bool segitiga(int b) {
	if(b < 0)
		return false;
	else{
		for(int x = 1; triangle <= b; x++){
		triangle += x;
			if(triangle == b)
				return true;
			else 
				return false;
		}
	}
}

int jumlah_pasien(int &c, int d){
	if(segitiga(d) == true){
		c += (c*3/1000);
			if(genap(d) == true) {
				c -= (c*5/1000);
				return c;
			} else {
				c -= (c*1/100);
				return c;
			}
	}else if(genap(d) == true){
		c -= (c*5/1000);
		return c;
	}else
		c -= (c*1/100);
		return c;	
}

int main(){
	int tgl, bln, thn, tgls = 24, blns = 4, thns = 2021, pasien = 1500000;
	char slash;

	cout << "Program Menghitung Pengurangan Pasien Covid-19\n";
	cout << "Tanggal Sekarang " << "23 April 2021";
	cout << "\nTotal Pasien Covid-19 : " << pasien;
	cout << "\nMasukkan Tanggal yang ingin dicari : "; cin >> tgl >> slash >> bln >> slash >> thn;

	while(thns <= thn){
		while(blns <= 12){
			while(tgls <= 30){
				jumlah_pasien(pasien, tgls);
			cout << "\nPasien Covid Pada Tanggal " << tgls << " " << blns << " " << thns << " = " << pasien;
			if(thns == thn)
				if(blns == bln)
					if(tgls == tgl)
						return 0;
			tgls++;
			}
			tgls = 1;
			blns++;
		}
		blns = 1;
		thns++;
	}
	
	getch();
}
