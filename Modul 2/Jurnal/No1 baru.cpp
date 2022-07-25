#include <iostream>

using namespace std;

int main(){
	int tahun, tinggi=0;
	
	cout << "Masukkan Tahun : "; cin >> tahun;
	
	for(int a=1; a<=tahun; a++){
	bool prima = true;
	
		if(a == 1){
			prima = false;
		}else{
			for(int b=2; b<=a/2; b++){
				if(a%b == 0){
					prima = false;
					break;
				}
			}
		}
		
			if(prima == true){
				tinggi += 7;
				cout << "\nPada tahun ke- " << a << " tinggi air naik : " << tinggi << " cm";
			}else{
				tinggi += 5;
				cout << "\nPada tahun ke- " << a << " tinggi air naik : " << tinggi << " cm";
			}
	}
	
	cout << "\n\nTotal kenaikan air selama " << tahun << " tahun adalah " << tinggi << " cm";
	
	return 0;
}
