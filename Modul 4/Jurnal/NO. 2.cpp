#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nama, kata;
	bool balik = true;
	int pjgstr, simpan;
	
	cout << "ABECEDARIAN AND PALINDROME PROGRAM\n";
	cout << "Nama Panggilan Anda : ";cin >> nama;
	cout << "Hai " << nama << ", Selamat Datang di Program ABECEDARIAN AND PALINDROME PROGRAM";
	cout << "\n============================================================================";
	cout << "\nABECEDARIAN PROGRAM\n";
	cout << "MASUKKAN KATA : ";cin >> kata;
	pjgstr = kata.length();
	for(int a = 0; a < pjgstr; a++){
		if(a == 0){
			simpan = (int)kata[a];
		}else if((int)kata[a] > simpan){
			simpan = (int)kata[a];
				if(a == pjgstr-1){
					cout << "Termasuk Abecedarian";}
		}else if((int)kata[a] < simpan){
			cout << "TIDAK Termasuk Abecedarian";
			break;}}
	cout << "\n============================================================================";
	cout << "\nPALINDROME PROGRAM\n";
	cout << "MASUKKAN KATA : ";cin >> kata;
	pjgstr = kata.length();
	for(int a = 0; a < (pjgstr/2); a++){
		if(kata[a] != kata[(pjgstr-1)-a]){
			balik = false;}}
	if(balik == true){
		cout << "Termasuk Palindrom";
	}else{
		cout << "TIDAK Termasuk Palindrom";}
	return 0;
}






