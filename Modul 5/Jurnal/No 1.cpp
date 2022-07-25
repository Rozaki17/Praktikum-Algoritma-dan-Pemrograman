#include <stdio.h>
#include <iostream>
using namespace std;

int jml;

int jurusan(string noinduk){
	switch(noinduk.at(2)){
		case 'A':cout << "Jurusan : Teknik Sipil";break;
		case 'B':cout << "Jurusan : Teknik Elektro";break;
		case 'C':cout << "Jurusan : Teknik Mesin";break;
		case 'D':cout << "Jurusan : Teknik Informatika";break;
		case 'E':cout << "Jurusan : Teknik Arsitektur";break;
		default:cout << "Jurusan Tidak Ada!!!";}}
	
int semester(string noinduk){
	string simpan;
	simpan += noinduk.at(4);
	simpan += noinduk.at(5);
	int smt = stoi(simpan);
	switch(smt){
		case 14:smt = (2021 - 2014)*2;cout << "Semester : " << smt;break;
		case 15:smt = (2021 - 2015)*2;cout << "Semester : " << smt;break;
		case 16:smt = (2021 - 2016)*2;cout << "Semester : " << smt;break;
		case 17:smt = (2021 - 2017)*2;cout << "Semester : " << smt;break;
		case 19:smt = (2021 - 2019)*2;cout << "Semester : " << smt;break;
		default:cout << "Semester Tidak Ada!!!";}}
	
struct data{
	string nim, dosen, nama;
	int thn;};

int main(){
	float ipk = 2.55, umur;
	string simpan;
	
	cout << "Jumlah Data : ";cin >> jml;
	data mhs[jml];
	cout << "=======Input Data Mahasiswa=======\n";
	for (int a = 0; a < jml; a++){
		cout << "Masukkan Nama : "; getline(cin>>ws, mhs[a].nama);
		cout << "Masukkan NIM : ";cin >> mhs[a].nim;
		cout << "Kode Dosen PA : ";cin >> mhs[a].dosen;
		cout << "Masukkan Tahun Lahir : ";cin >> mhs[a].thn;
		cout << endl;}
	cout << "=======Data Mahasiswa=======\n";
	for (int a = 0; a < jml; a++){
		cout << "Nama : " << mhs[a].nama << endl;
		simpan = mhs[a].nim.at(4);
		simpan += mhs[a].nim.at(5);
		cout << "Angkatan : 20" << simpan;cout << endl;
		jurusan(mhs[a].nim);cout << endl;
		semester(mhs[a].nim);cout << endl;
		cout << "IPK : " << ipk;ipk += 0.15;
		cout << "\nDosen Pengampu : " << mhs[a].dosen << endl;
		cout << "Umur : " << 2021 - mhs[a].thn;
		cout << endl << endl;}
	cout << "=======Data Dosen=======\n";
	string DPA[10]; 
	bool sudah;
	int count = 0;
	for(int a = 0; a < jml; a++){
		sudah = false;
		for(int b = 0; b < count; b++){
			if(mhs[a].dosen == DPA[b]){
				sudah = true;break;}}
		if(sudah == false){
			DPA[count] = mhs[a].dosen;
			count++;}}
	for(int a = 0; a < jml; a++){	
		cout << DPA[a] << endl;}
	cout << endl << "===Mahasiswa Yang Diampu oleh IGP===\n";
	for (int a = 0; a < jml; a++){
		if(mhs[a].dosen == "IGP"){cout << mhs[a].nama << endl;}}
	cout << endl << "===Mahasiswa Yang Diampu oleh BI===\n";
	for (int a = 0; a < jml; a++){
		if(mhs[a].dosen == "BI"){cout << mhs[a].nama << endl;}}
	cout << endl << "=======Daftar Mahasiswa Yang Bisa Mengikuti Mawapres=====\n";
	ipk = 2.55;
	for (int a = 0; a < jml; a++){
		umur = 2021-mhs[a].thn;
		if (ipk >= 3 && umur <= 22){
			cout << mhs[a].nama << endl;
			ipk += 0.15;}
		else{ipk += 0.15;}}
	
	return 0;}
