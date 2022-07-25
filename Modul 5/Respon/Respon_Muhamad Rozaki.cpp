#include<iostream>
#include<conio.h>
using namespace std;

struct data{
    string username[5]={"Muhamad Rozaki","Moreno Kurniawan","Agung Prasetiyo","Utami Putri","Mahendra Raharja"};
    string password[5]={"makan12","minumair","@biawak11","apa4yo","TemanSayang11"};
    int rekening[5]={23002,23003,23023,23004,23010};
    int saldo[5]={5000000,6500000,10000000,4000000,2500000};
}nasabah;

int main(){
    int pilih,rek,simpan=5,pindah,toleransi=0;
    string user,pass,gantiuser,gantipass;
    bool cek=false;
    a:
    cout<<"------------->Selamat Datang di ATM-ATM an<-------------\n\n";
    cout<<"Pilihan:\n1. Login\n2. Transfer\n3. Cek Saldo\n4. Ubah Username dan Password\n5. Logout\nMasukkan Pilihan: ";cin>>pilih;   
    switch(pilih){
        case 1: if(simpan==5){
                    cout<<"Masukkan username anda : ";getline(cin,user);getline(cin,user);
                    cout<<"Masukkan password anda : ";getline(cin,pass);
                    for(int i=0;i<5;i++){
                        if(user==nasabah.username[i] && pass==nasabah.password[i]){
                            cout<<"Selamat datang "<<nasabah.username[i]<<endl;
                            cek=true;simpan=i;
                            getch();system("cls");goto a;
						}
					}if(cek==false){
						cout<<"Username atau password yang anda masukkan salah!"<<endl;
						getch();system("cls");goto a;
					}
                }else{
                    cout<<"Silakan logout terlebih dahulu"<<endl;
                    getch();system("cls");goto a;
                }break;
        case 2: if(cek==true){
        			g:
                    cout<<"Masukkan Nomor rekening yang dituju : ";cin>>rek;
                    for(int i=0;i<5;i++){
                        if(rek==nasabah.rekening[i]){
                    		cout<<"Saldo anda saat ini : Rp."<<nasabah.saldo[simpan]<<endl;
                    		cout<<"Masukkan nominal yang ingin ditransfer : Rp.";cin>>pindah;
                            nasabah.saldo[simpan]-=pindah;
                            nasabah.saldo[i]+=pindah;
                            cout<<"Saldo anda setelah melakukan transfer : Rp."<<nasabah.saldo[simpan]<<endl;
                            getch();system("cls");goto a;
                        }else toleransi++;
                    }if(toleransi==5){
                    	cout<<"Rekening yang anda masukkan salah!"<<endl;
                    	getch();goto g;
					}
                }else{
                    cout<<"Mohon Login Terlebih dahulu!"<<endl;
                    getch();system("cls");goto a;
                }break;
        case 3: if(cek==true){
                    cout<<"\nSaldo anda saat ini : Rp."<<nasabah.saldo[simpan]<<endl;
                    getch();system("cls");goto a;
                }else{
                    cout<<"Mohon Login Terlebih dahulu!"<<endl;
                    getch();system("cls");goto a;
                }break;
        case 4: if(cek==true){
                    pilih=0;
                    f:
                    cout<<"Pilihan\n1. Ubah Username\n2. Ubah Password\n3. Ubah Username dan Password\nMasukkan Pilihan : ";cin>>pilih;
                    if(pilih==1){
                        c:
                        cout<<"Masukkan Username Baru : ";getline(cin,gantiuser);getline(cin,gantiuser);
                        cout<<"Masukkan Password : ";getline(cin,pass);
                        if(pass!=nasabah.password[simpan]){
                            cout<<"Maaf, password yang anda masukkan salah, mohon masukkan\n password yang benar untuk mengubah username!"<<endl;
                            getch();goto c;
                        }else{
                        	nasabah.username[simpan]=gantiuser;
							cout<<"Username berhasil diperbaharui"<<endl;
	                        getch();system("cls");goto a;
						}
                    }else if(pilih==2){
                        d:
                        cout<<"Masukkan Password Baru : ";getline(cin,gantipass);getline(cin,gantipass);
                        cout<<"Masukkan Password Lama : ";getline(cin,pass);
                        if(pass!=nasabah.password[simpan]){
                            cout<<"Maaf, password yang anda masukkan salah, mohon masukkan\n password yang benar untuk membuat password baru!"<<endl;
                            getch();goto d;
                        }else{
                        	nasabah.password[simpan]=gantipass;
							cout<<"Password berhasil diperbaharui"<<endl;
	                        getch();system("cls");goto a;
						}
                    }else if(pilih==3){
                        e:
                        cout<<"Masukkan Username Baru : ";getline(cin,gantiuser);getline(cin,gantiuser);
                        cout<<"Masukkan Password Baru : ";getline(cin,gantipass);
                        cout<<"Masukkan Password Lama : ";getline(cin,pass);
                        if(pass!=nasabah.password[simpan]){
                            cout<<"Maaf, password yang anda masukkan salah, mohon masukkan\n password yang benar untuk mengubah password dan username!"<<endl;
                            getch();goto e;
                        }else{
                        	nasabah.username[simpan]=gantiuser;
                        	nasabah.password[simpan]=gantipass;
							cout<<"Username dan password berhasil diperbaharui"<<endl;
	                        getch();system("cls");goto a;
						}
                    }else{
                        cout<<"Pilihan yang anda masukkan salah!";
                        getch();goto f;
                    }
                }else{
                    cout<<"Mohon Login Terlebih dahulu!"<<endl;
                    getch();system("cls");goto a;
                }break;
        case 5: if(cek==true){
                    cout<<"Logout berhasil\n-------------Terima kasih-------------"<<endl;
                    cek=false;simpan=5;
                    getch();system("cls");goto a;
                }else{
                	cout<<"Mohon Login Terlebih dahulu!"<<endl;
                    getch();system("cls");goto a;
				}break;
		default : cout<<"Pilihan yang anda masukkan salah!"<<endl;
				  getch();system("cls");goto a;break;
    } 
}
