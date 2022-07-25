#include <iostream>

using namespace std;

int main(){
	int emba, embb, embc, embd, embe, embf, simpan1, simpan2, simpan3;
	
	cout << "Isi keranjang sebelum tertukar" << endl;
	cout << "Ember A : "; cin >> emba;
	cout << "Ember B : "; cin >> embb;
	cout << "Ember C : "; cin >> embc;
	cout << "Ember D : "; cin >> embd; 
	cout << "Ember E : "; cin >> embe;
	cout << "Ember F : "; cin >> embf;
	
	simpan1 = emba;
	emba = embc;
	simpan2 = embb;
	embb = embf;
	embc = embe;
	simpan3 = embd;
	embd = simpan1;
	embe = simpan2;
	embf = simpan3;
	
	cout << "Isi keranjang setelah tertukar";
	cout << "\nEmber A : " << emba;
	cout << "\nEmber B : " << embb;
	cout << "\nEmber C : " << embc;
	cout << "\nEmber D : " << embd; 
	cout << "\nEmber E : " << embe;
	cout << "\nEmber F : " << embf;
	
	return 0;
}
