#include <iostream>
using namespace std;
int x, simpan;
int main(){
	//input baris dan kolom
	cout << "Dua buah matrik berukuran a x a, masukkan nilai a : ";cin >> x;
	int matrik1[x][x], matrik2[x][x], hasil[x][x];
	//input elemen setiap matrik
	cout << "Masukkan nilai pada matrik 1\n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			cout << "Matrik1[" << a << "][" << b << "] : ";cin >> matrik1[a][b];}}
	cout << "\nMasukkan nilai pada matrik 2\n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			cout << "Matrik2[" << a << "][" << b << "] : ";cin >> matrik2[a][b];}}
	//clear screen
	system("cls");
	//output matrik
	cout << "Matrik 1 : \n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			cout << matrik1[a][b] << "\t";}
		cout << endl;}
	cout << "Matrik 2 : \n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			cout << matrik2[a][b] << "\t";}
		cout << endl;}
	cout << "=====================================\n";
	//pengurutan matrik
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			for(int c = 0; c < x; c++){
				for(int d = 0; d < x; d++){
					if(matrik1[c][d] > matrik1[a][b]){
						simpan = matrik1[c][d];
						matrik1[c][d] = matrik1[a][b];
						matrik1[a][b] = simpan;}
					if(matrik2[c][d] > matrik2[a][b]){
						simpan = matrik2[c][d];
						matrik2[c][d] = matrik2[a][b];
						matrik2[a][b] = simpan;}}}}}
	//hasil pengurutan
	cout << "Matrik Setelah diurutkan : \n";
	cout << "Matrik 1 : \n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			cout << matrik1[a][b] << "\t";}
		cout << endl;}
	cout << "Matrik 2 : \n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			cout << matrik2[a][b] << "\t";}
		cout << endl;}
	cout << "=====================================\n";
	//hasil penjumlahan matrik
	cout << "Hasil Penjumlahan Matrik1 dan Matrik2 setelah diurutkan adalah :\n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			hasil[a][b] = matrik1[a][b] + matrik2[a][b];
			cout << hasil[a][b] << "\t";}
		cout << endl;}
	cout << "=====================================\n";
	//hasil pengurangan matrik
	cout << "Hasil Pengurangan Matrik1 dan Matrik2 setelah diurutkan adalah :\n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			hasil[a][b] = matrik1[a][b] - matrik2[a][b];
			cout << hasil[a][b] << "\t";}
		cout << endl;}
	cout << "=====================================\n";
	//hasil perkalian matrik
	simpan = 0;
	cout << "Hasil Perkalian Matrik1 dan Matrik2 setelah diurutkan adalah :\n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			for(int c = 0; c < x; c++){
				simpan = simpan + matrik1[a][c] * matrik2[c][b];}
			hasil[a][b] = simpan;
			simpan = 0;}}
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			cout << hasil[a][b] << "\t";}
		cout << endl;}
	cout << "=====================================\n";
	//angka terbesar dari matrik
	cout << "Angka terbesar dari matrik1 dan matrik2 adalah : \n";
		cout << matrik1[x-1][x-1] << ", pada matrik1\n";
		cout << matrik2[x-1][x-1] << ", pada matrik2";
	cout << "\n=====================================\n";
	//angka terkecil dari matrik
	cout << "Angka terkecil dari matrik1 dan matrik2 adalah : \n";
		cout << matrik1[x-x][x-x] << ", pada matrik1\n";
		cout << matrik2[x-x][x-x] << ", pada matrik2";
	cout << "\n=====================================\n";
	//Hasil konversi matrik ke dalam romawi
	cout << "Hasil konversi matrik ke dalam romawi : \n";
	cout << "Matrik 1 : \n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			if (matrik1[a][b]>=3000){
		    	cout<<"MMM";
		    	matrik1[a][b]=matrik1[a][b]-3000;}
		    if (matrik1[a][b]>=2000){
		        cout<<"MM";
		        matrik1[a][b]=matrik1[a][b]-2000;}
		    if (matrik1[a][b]>=1000){
		        cout<<"M";
		        matrik1[a][b]=matrik1[a][b]-1000;}
		    if (matrik1[a][b]>=900){
		        cout<<"CM";
		        matrik1[a][b]=matrik1[a][b]-900;}
		    if(matrik1[a][b]>=500){
		        cout<<"D";
		        matrik1[a][b]=matrik1[a][b]-500;}
		    if(matrik1[a][b]>=400){
		        cout<<"CD";
		        matrik1[a][b]=matrik1[a][b]-400;}
		    if(matrik1[a][b]>=300){
		        cout<<"CCC";
		        matrik1[a][b]=matrik1[a][b]-300;}
		    if(matrik1[a][b]>=200){
		        cout<<"CC";
		        matrik1[a][b]=matrik1[a][b]-200;}
		    if(matrik1[a][b]>=100){
		        cout<<"C";
		        matrik1[a][b]=matrik1[a][b]-100;}
		    if(matrik1[a][b]>=90){
		        cout<<"XC";
		        matrik1[a][b]=matrik1[a][b]-90;}
		    if(matrik1[a][b]>=50){
		        cout<<"L";
		        matrik1[a][b]=matrik1[a][b]-50;}
		    if(matrik1[a][b]>=40){
		        cout<<"XL";
		        matrik1[a][b]=matrik1[a][b]-40;}
		    if(matrik1[a][b]>=30){
		        cout<<"XXX";
		        matrik1[a][b]=matrik1[a][b]-30;}
		    if(matrik1[a][b]>=20){
		        cout<<"XX";
		        matrik1[a][b]=matrik1[a][b]-20;}
		    if(matrik1[a][b]>=10){
		        cout<<"X";
		        matrik1[a][b]=matrik1[a][b]-10;}
		    if(matrik1[a][b]>=9){
		        cout<<"IX";
		        matrik1[a][b]=matrik1[a][b]-9;}
		    if(matrik1[a][b]>=5){
		        cout<<"V";
		        matrik1[a][b]=matrik1[a][b]-5;}
		    if(matrik1[a][b]>=4){
		        cout<<"IV";
		        matrik1[a][b]=matrik1[a][b]-4;}
		    if(matrik1[a][b]>=3){
		        cout<<"III";
		        matrik1[a][b]=matrik1[a][b]-3;}
		    if(matrik1[a][b]>=2){
		        cout<<"II";
		        matrik1[a][b]=matrik1[a][b]-2;}
		    if(matrik1[a][b]>=1){
		        cout<<"I";
		        matrik1[a][b]=matrik1[a][b]-1;}
	cout << (char)matrik1[a][b] << "\t";}
	cout << endl;}
	cout << "Matrik 2 : \n";
	for(int a = 0; a < x; a++){
		for(int b = 0; b < x; b++){
			if (matrik2[a][b]>=3000){
		    	cout<<"MMM";
		    	matrik2[a][b]=matrik2[a][b]-3000;}
		    if (matrik2[a][b]>=2000){
		        cout<<"MM";
		        matrik2[a][b]=matrik2[a][b]-2000;}
		    if (matrik2[a][b]>=1000){
		        cout<<"M";
		        matrik2[a][b]=matrik2[a][b]-1000;}
		    if (matrik2[a][b]>=900){
		        cout<<"CM";
		        matrik2[a][b]=matrik2[a][b]-900;}
		    if(matrik2[a][b]>=500){
		        cout<<"D";
		        matrik2[a][b]=matrik2[a][b]-500;}
		    if(matrik2[a][b]>=400){
		        cout<<"CD";
		        matrik2[a][b]=matrik2[a][b]-400;}
		    if(matrik2[a][b]>=300){
		        cout<<"CCC";
		        matrik2[a][b]=matrik2[a][b]-300;}
		    if(matrik2[a][b]>=200){
		        cout<<"CC";
		        matrik2[a][b]=matrik2[a][b]-200;}
		    if(matrik2[a][b]>=100){
		        cout<<"C";
		        matrik2[a][b]=matrik2[a][b]-100;}
		    if(matrik2[a][b]>=90){
		        cout<<"XC";
		        matrik2[a][b]=matrik2[a][b]-90;}
		    if(matrik2[a][b]>=50){
		        cout<<"L";
		        matrik2[a][b]=matrik2[a][b]-50;}
		    if(matrik2[a][b]>=40){
		        cout<<"XL";
		        matrik2[a][b]=matrik2[a][b]-40;}
		    if(matrik2[a][b]>=30){
		        cout<<"XXX";
		        matrik2[a][b]=matrik2[a][b]-30;}
		    if(matrik2[a][b]>=20){
		        cout<<"XX";
		        matrik2[a][b]=matrik2[a][b]-20;}
		    if(matrik2[a][b]>=10){
		        cout<<"X";
		        matrik2[a][b]=matrik2[a][b]-10;}
		    if(matrik2[a][b]>=9){
		        cout<<"IX";
		        matrik2[a][b]=matrik2[a][b]-9;}
		    if(matrik2[a][b]>=5){
		        cout<<"V";
		        matrik2[a][b]=matrik2[a][b]-5;}
		    if(matrik2[a][b]>=4){
		        cout<<"IV";
		        matrik2[a][b]=matrik2[a][b]-4;}
		    if(matrik2[a][b]>=3){
		        cout<<"III";
		        matrik2[a][b]=matrik2[a][b]-3;}
		    if(matrik2[a][b]>=2){
		        cout<<"II";
		        matrik2[a][b]=matrik2[a][b]-2;}
		    if(matrik2[a][b]>=1){
		        cout<<"I";
		        matrik2[a][b]=matrik2[a][b]-1;}
	cout << (char)matrik2[a][b] << "\t";}
	cout << endl;}
	return 0;}
















