#include <iostream>

using namespace std;

int main(){
	int akhir, sel, batas, tot=0, fn;
	
	cout << "Masukkan Nilai Akhir (a)\t: "; cin >> akhir;
	cout << "Masukkan Selisih (b)\t\t: "; cin >> sel;
	cout << "Masukkan Banyak Barisan (n)\t: "; cin >> batas;
	
	cout << "\na. Barisan Aritmetika : ";
	for(int a = batas; a >= akhir; a-=sel){
		cout << a << " ";
		tot += a;
	}
	cout << "\nJumlah : " << tot; 
	
	tot = 0;
	cout << "\n\nb. Bilangan Genap : ";
	for(int a = batas; a >= akhir; a-=sel){
		if(a%2 == 0){
			cout << a << " ";
			tot += a;
		}
	}
	cout << "\nJumlah : " << tot; 
	
	tot = 0;
	cout << "\n\nc. Bilangan Ganjil : ";
	for(int a = batas; a >= akhir; a-=sel){
		if(a%2 == 1){
			cout << a << " ";
			tot += a;
		}
	}
	cout << "\nJumlah : " << tot;
	
	tot = 0;
	cout << "\n\nd. Bilangan Prima : ";
	for(int a = batas; a >= akhir; a-=sel){
	bool prima = true;
	
		if(a == 1){
			prima = false;
		}else{
			for(int b = 2; b <= a/2; b++){
				if(a%b == 0){
					prima = false;
					break;
			}
		}
		
			if(prima == true){
				cout << a << " ";
				tot += a;
			}else{
			}
				
		}
	}
	cout << "\nJumlah : " << tot;
	
	tot = 0;
	cout << "\n\ne. Bilangan Fibonacci : ";
	for(int a = batas; a >= akhir; a-=sel){
		fn = 0;
		for(int b = 1; fn <= batas; b = fn-b){
			fn += b;
			if(fn == a){
				cout << a << " ";
				tot += a;
			}
		}
	}
	cout << "\nJumlah : " << tot;
	
	tot = 0;
	cout << "\n\nf. Bilangan Segitiga : ";
	for(int a = batas; a >= akhir; a-=sel){
		fn = 0;
		for(int b = 1; fn < batas; b++){
			fn += b;
			if(fn == a){
				cout << a << " ";
				tot += a;
			}
		}
	}
	cout << "\nJumlah : " << tot;
	
	return 0;
}







