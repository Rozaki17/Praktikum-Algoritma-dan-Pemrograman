#include <iostream>

using namespace std;

int main(){
	int akhir, selis, batas, a, b, c, fn;
	
	cout << "Masukkan Nilai Akhir (a)\t: "; cin >> akhir;
	cout << "Masukkan Selisih (b)\t\t: "; cin >> selis;
	cout << "Masukkan Banyak Barisan (n)\t: "; cin >> batas;
	
	
	b=0;
	cout << "\na. Seluruh bilangan aritmetika\t: ";
	for(a=batas; a>=akhir; a-=selis){
		cout << a << " ";
		b += a;
		}
	cout << "\nJumlah: " << b;


	b=0;
	cout << "\n\nb. Seluruh bilangan genap\t: "; 
	for(a=batas; a>=akhir; a--){
		if(a%2==0){
			cout << a << " ";
			b += a;	
		}
	}
	cout << "\nJumlah: " << b;
	
	
	b=0;
	cout << "\n\nc. Seluruh bilangan ganjil\t: "; 
	for(a=batas; a>=akhir; a--){
		if(a%2==1){
			cout << a << " ";
			b += a;	
		}
	}
	cout << "\nJumlah: " << b;
	
	
	b=0;
	cout << "\n\nd. Seluruh bilangan prima\t: "; 
	for(int x=batas; x>=akhir; x--){
		if(x/2 == 1){
			cout << x << " ";
			b+=x;
		}else if(x-5 == 0 || x-7 == 0 || x-11 == 0 || x-13 == 0){
			cout << x << " ";
			b+=x;
		}
	}
	cout << "\nJumlah: " << b;
	
	return 0;
}
