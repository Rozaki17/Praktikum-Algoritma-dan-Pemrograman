#include <iostream>

using namespace std;

int main(){
	int tahun, tinggi;
	
	cout << "Masukkan Tahun : "; cin >> tahun;
	
	tinggi=0;
	for(int a = 1; a<=tahun; a++){
		if(a/1 == 1){
			tinggi += 5;
			cout << "\nAir laut naik dalam " << a << " tahun : " << tinggi << " cm";
		}else if(a/2 == 1){
			tinggi += 7;
			cout << "\nAir laut naik dalam " << a << " tahun : " << tinggi << " cm";
		}else if(a%2 == 0 || a%3 == 0 || a%4 == 0 || a%5 == 0){
			tinggi += 5;
			cout << "\nAir laut naik dalam " << a << " tahun : " << tinggi << " cm";
		}
	}
	cout << "\n\nKenaikan air laut selama " << tahun << " tahun : " << tinggi << " cm";
	
	return 0;
}
