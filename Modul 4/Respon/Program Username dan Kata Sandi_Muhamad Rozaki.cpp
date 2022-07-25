#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int batas = 3, waktu = 30;
string usertrue, passtrue, user, pass;

int userpass(int a){
	system("cls");
	if(a == 0){
		goto lagi;}
	else{
		cout << "=======================================================\n";
		cout << "\t\tPERANGKAT TERKUNCI";
		cout << "\nMASUKKAN USERNAME DAN PASSWORD UNTUK MEMBUKA PERANGKAT!";
		cout << "\n=======================================================\n";
		cout << "Username : "; cin >> user;
		cout << "Password : "; cin >> pass;
		if(user == usertrue && pass == passtrue){
			cout << "\n=======================================================\n"; 
			cout << "\t\tPERANGKAT TERBUKA!";
			cout << "\n=======================================================\n";
			Sleep(2500);
			system("cls");
			return 0;
		}else if(user != usertrue && pass == passtrue){
			cout << "\n=======================================================\n";
			cout << "\t\tUSERNAME SALAH!";
			cout << "\n\t\tTersisa " << a-1 << "x kesempatan";
			cout << "\n=======================================================\n";
			Sleep(2500);
			system("cls");
			return userpass(a - 1);
		}else if(user == usertrue && pass != passtrue){
			cout << "\n=======================================================\n";
			cout << "\t\tPASSWORD SALAH!";
			cout << "\n\t\tTersisa " << a-1 << "x kesempatan"; 
			cout << "\n=======================================================\n";
			Sleep(2500);
			system("cls");
			return userpass(a - 1);
		}else{
			cout << "\n=======================================================\n";
			cout << "\t\tUSERNAME DAN PASSWORD SALAH!"; 
			cout << "\n\t\tTersisa " << a-1 << "x kesempatan"; 
			cout << "\n=======================================================\n";
			Sleep(2500);
			system("cls");
			return userpass(a - 1);
		}
		lagi:
			system("cls");
			for(int t = waktu; t >= 0; t--){
				cout << "COBA LAGI DALAM " << t << " detik";Sleep(700);
				system("cls");
				if(t == 0){
					waktu += 30;
					return userpass(a+3);
				}
			}
	}
}

int main(){
	cout << "Buat Username Anda : "; cin >> usertrue;
	cout << "Buat Password Anda : "; cin >> passtrue;
	system("cls");
	
	userpass(batas);
	
	getch();
	return 0;
}
