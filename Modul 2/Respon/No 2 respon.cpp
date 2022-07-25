#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
string usertrue, passtrue, user, pass, waktu, cobalagi;

int userpass(int a){
	if(a == 0){
		return a;}
	else{
		cout << "\nUsername : "; cin >> user;
		cout << "Password : "; cin >> pass;
		
		return userpass(a - 1);
	}
}

int main(){
	
	cout << "Tentukan Username Anda : "; cin >> usertrue;
	cout << "Tentukan Password Anda : "; cin >> passtrue;
	system("cls");
	cout << "====================================================\n";
	cout << "\t\tPONSEL TERKUNCI";
	cout << "\nMASUKKAN USERNAME DAN PASSWORD UNTUK MEMBUKA PONSEL!";
	cout << "\n====================================================\n";
	
	cobalagi:
	//for(int a = 3; a >= 1; a--){
		//cout << "\nUsername : "; cin >> user;
		//cout << "Password : "; cin >> pass;
		int batas = 3;
		userpass(batas);
			if(user == usertrue && pass == passtrue){
				cout << "\n====================================================\n"; 
				cout << "\t\tPONSEL TERBUKA!";
				cout << "\n====================================================\n";
			}else if(user != usertrue && pass == passtrue){
				cout << "\n====================================================\n";
				cout << "\t\tUSERNAME SALAH!";
				cout << "\n\t\tTersisa " << a-1 << "x";
				cout << "\n====================================================\n";
			}else if(user == usertrue && pass != passtrue){
				cout << "\n====================================================\n";
				cout << "\t\tPASSWORD SALAH!";
				cout << "\n\t\tTersisa " << a-1 << "x"; 
				cout << "\n====================================================\n";
			}else{
				cout << "\n====================================================\n";
				cout << "\tUSERNAME DAN PASSWORD SALAH!"; 
				cout << "\n\t\tTersisa " << a-1 << "x"; 
				cout << "\n====================================================\n";
			}
				if(a == 1){
					system("cls");
					cout << "COBA DALAM ";
					for(int t = 30; t >= 0; t--){
						Sleep(400);
						cout << t;
						system("cls");
						if(t == 0){
							goto cobalagi;
						 }
					}
				}
	//}
	
	getch();
