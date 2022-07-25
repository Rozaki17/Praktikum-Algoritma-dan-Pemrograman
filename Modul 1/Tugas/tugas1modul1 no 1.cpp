#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float bulbim=9000, yetang=12000, jajang=7000;
	float jap=8000, yeopsal=8000, nakbok=10000;

	cout << "===========================================\n";
	cout << "DAFTAR MENU(termasuk pajak 5%)";
	cout << "\n1. Bulgogi Bibimbap : " << bulbim << " won";
	cout << "\n2. Samgyetang       : " << yetang << " won";
	cout << "\n3. Jajangmyeon      : " << jajang << " won";
	cout << "\n4. Japchae          : " << jap << " won";
	cout << "\n5. Samgyeopsal      : " << yeopsal << " won";
	cout << "\n6. Nakji Bokkeum    : " << nakbok << " won";
	
	cout << "\n===========================================";
	
	cout << "\n1. Bulgogi Bibimbap\n";
		cout << "\tHarga asli : " << (bulbim*100/105) << " won = Rp." << (bulbim*100/105)*12.75;
		cout << "\n\tPajak\t   : " << bulbim-(bulbim*100/105) << " won = Rp." << (bulbim-(bulbim*100/105))*12.75;
	cout << "\n2. Samgyetang\n";
		cout << "\tHarga asli : " << (yetang*100/105) << " won = Rp." << (yetang*100/105)*12.75;
		cout << "\n\tPajak\t   : " << yetang-(yetang*100/105) << " won = Rp." << (yetang-(yetang*100/105))*12.75;
	cout << "\n3. Jajangmyeon\n";
		cout << "\tHarga asli : " << (jajang*100/105) << " won = Rp." << (jajang*100/105)*12.75;
		cout << "\n\tPajak\t   : " << jajang-(jajang*100/105) << " won = Rp." << (jajang-(jajang*100/105))*12.75;
	cout << "\n4. Japchae\n";
		cout << "\tHarga asli : " << (jap*100/105) << " won = Rp." << (jap*100/105)*12.75;
		cout << "\n\tPajak\t   : " << jap-(jap*100/105) << " won = Rp." << (jap-(jap*100/105))*12.75;
	cout << "\n5. Samgyeopsal\n";
		cout << "\tHarga asli : " << (yeopsal*100/105) << " won = Rp." << (yeopsal*100/105)*12.75;
		cout << "\n\tPajak\t   : " << yeopsal-(yeopsal*100/105) << " won = Rp." << (yeopsal-(yeopsal*100/105))*12.75;
	cout << "\n6. Nakji Bokkeum\n";
		cout << "\tHarga asli : " << (nakbok*100/105) << " won = Rp." << (nakbok*100/105)*12.75;
		cout << "\n\tPajak\t   : " << nakbok-(nakbok*100/105) << " won = Rp." << (nakbok-(nakbok*100/105))*12.75;
	
	cout << "\n\nMenu yang dipesan adalah Bulgogi Bibimbap, Japchae, dan Nakji Bokkeum\n";
	cout << "Total bayar Anda adalah\t: " << ((bulbim*100/105)+(jap*100/105)+(yeopsal*100/105))+(((bulbim*100/105)+(jap*100/105)+(yeopsal*100/105))*11/100) << " won = Rp.";
	cout << (((bulbim*100/105)+(jap*100/105)+(yeopsal*100/105))+(((bulbim*100/105)+(jap*100/105)+(yeopsal*100/105))+11/100))*12.75;
	cout << "\nTotal Pajaknya adalah\t: " << ((bulbim*100/105)+(jap*100/105)+(yeopsal*100/105))*11/100 << " won = Rp.";
	cout << (((bulbim*100/105)+(jap*100/105)+(yeopsal*100/105))*11/100)*12.75;
	
	getch();
	return 0;
}
