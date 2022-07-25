#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void utama();
void home();
int indeks(string nama);
bool cekteman(string nama, int index);

int online, pilih, add;
int jml=0, count=0, hitung=0;
bool log, saranonline[10];
string masuk;

struct akun{
	string nama;
	int umur, kawan=0;
	akun *teman[10];
}sosmed[10], *offline[10];

void home(){
	cout << "===HOME===\n";
	cout << "1. Tambah Teman\n";
	cout << "2. Lihat Teman\n";
	cout << "3. Saran Pertemanan\n";
	cout << "4. Kembali ke Menu Utama(Logout)\n";
	cout << "Masukkan Pilihan (Angka): ";cin >> pilih;
	switch(pilih){
	case 1:
	hitung = 0, count = 0;
		for(int a = 0; a < jml; a++){
			if(sosmed[online].nama != sosmed[a].nama){
				offline[count] = &sosmed[a];
				cout << "[" << hitung+1 << "] " << sosmed[a].nama << endl;
				count++;hitung++;
			}else{}}
		cout << "Pilih Teman Yang Ingin Ditambah (angka): ";cin >> add;
		if(sosmed[online].kawan <= 4){
			sosmed[online].teman[sosmed[online].kawan] = &*offline[add-1];
			cout << "Teman Berhasil Ditambahkan!\n\n";
			if((*offline[add-1]).kawan <= 4){
				(*offline[add-1]).teman[(*offline[add-1]).kawan] = &sosmed[online];
				sosmed[online].kawan++;(*offline[add-1]).kawan++;}
			cout << "Tekan Apa Saja Untuk Kembali";getch();system("cls");home();}
		else{
			cout << "Teman Sudah Full!\n\n";
			cout << "Tekan Apa Saja Untuk Kembali";getch();system("cls");home();}
		break;
	case 2:
		cout << "\tDAFTAR TEMAN ANDA\n\t=================";
		count = 0;
		for(int a = 0; a < sosmed[online].kawan; a++){
			cout << endl << count+1 << ". " << sosmed[online].teman[a]->nama;
			count++;}
		cout << "\nTekan Apa Saja Untuk Kembali";getch();system("cls");home();
		break;
	case 3:
		cout << "\tSaran Pertemanan Anda\n\t=================\n";
		saranonline[10] = {false};
		for(int a = 0; a < sosmed[online].kawan; a++){
			for(int b = 0; b < sosmed[online].teman[a]->kawan; b++){
				if(cekteman(sosmed[online].teman[a]->teman[b]->nama, online) == false){
					if(sosmed[online].teman[a]->teman[b]->nama != sosmed[online].nama){
						int cek = indeks(sosmed[online].teman[a]->teman[b]->nama);saranonline[cek] = true;}}}
		for(int c = 0; c < jml; c++){
			if(saranonline[c] == true){
			cout << sosmed[c].nama;}}
				cout << endl;}
		cout << "\nTekan Apa Saja Untuk Kembali";getch();system("cls");home();
		break;	
	case 4:
		cout << "\nAnda Berhasil Logout";
		Sleep(700);system("cls");utama();}}

void utama(){
	cout << "===SELAMAT DATANG DI FACEBOOK===\n";
	cout << "1. Login\n";
	cout << "2. Buat Akun\n";
	cout << "3. Data Semua Akun\n";
	cout << "4. Data Pertemanan\n";
	cout << "5. Data Saran Pertemanan\n";
	cout << "Masukkan Pilihan (Angka): ";cin >> pilih;
	system("cls");
	switch(pilih){
	case 1:
		if(log == false){
			cout << "Silahkan Buat Akun Terlebih Dahulu!!!";
			Sleep(1000);system("cls");utama();}
		else{
			cout << "Silahkan Login\n\n";
			cout << "Masukkan Nama Akun : ";getline(cin>>ws,masuk);
			for(int a = 0; a < jml; a++){
				if(masuk == sosmed[a].nama){
					cout << "Login Berhasil!!!\n";online = a;
					cout << "Welcome " << masuk << endl;
					Sleep(700);system("cls");home();break;}}}
		cout << "Login Gagal!!!\n";Sleep(700);system("cls");utama();break;
	case 2:
		cout << "===Lengkapi Persyaratan===\n\n";
		cout << "Masukkan Nama : ";getline(cin>>ws,sosmed[jml].nama);
		cout << "Masukkan Usia : ";cin >> sosmed[jml].umur;
		cout << "\nBuat Akun Berhasil!!!";jml++;
		log = true;Sleep(700);system("cls");utama();break;
	case 3:
		cout << "\tDATA SEMUA AKUN\n\t===============\n";
		for(int a = 0; a < jml; a++){
			cout << "Nama : " << sosmed[a].nama;
			cout << " -- Umur : " << sosmed[a].umur << endl;}
	cout << "\nTekan Apa Saja Untuk Kembali";getch();system("cls");utama();break;
	case 4:
		cout << "\tData Pertemanan Semua Akun\n\t========================\n";
		count = 0;
		for(int a = 0; a < jml; a++){
			cout << count+1 << "." << sosmed[a].nama << " : ";count++;
			for(int b = 0; b < sosmed[a].kawan; b++){
				cout << sosmed[a].teman[b]->nama << " ";}
			cout << endl;}
		cout << "\nTekan Apa Saja Untuk Kembali";getch();system("cls");utama();
	break;
	case 5:
		cout << "\tSaran Pertemanan Untuk Semua Akun\n\t==========================\n";
		for(int a = 0; a < jml; a++){
			cout << sosmed[a].nama << " : ";bool saransemua[10] = {false};
			for(int b = 0; b < sosmed[a].kawan; b++){
				for(int c = 0; c < sosmed[a].teman[b]->kawan; c++){
					if(cekteman(sosmed[a].teman[b]->teman[c]->nama, a) == false){
						if(sosmed[a].teman[b]->teman[c]->nama != sosmed[a].nama){
							int cek = indeks(sosmed[a].teman[b]->teman[c]->nama);saransemua[cek] = true;}}}}
			for(int d = 0; d < jml; d++){
				if(saransemua[d] == true){cout << sosmed[d].nama;}}
			cout << endl;}
	cout << "\nTekan Apa Saja Untuk Kembali";getch();system("cls");utama();
	break;}}
		
int indeks(string nama){
	for(int a = 0; a < jml; a++){
		if(sosmed[a].nama == nama){return a;}}}

bool cekteman(string nama, int index){
	for(int a = 0; a < sosmed[index].kawan; a++){
		if(sosmed[index].teman[a]->nama == nama){return true;}}
	return false;}

int main(){
	
	utama();
	
	return 0;}
