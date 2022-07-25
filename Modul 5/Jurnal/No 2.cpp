#include <iostream>
using namespace std;

struct surat{
	string nomer,nama,alamat,merk,warna,tipe,bahan,model,jenis,tnkb;
	string regis,buat,bpkb,isi,kode,angka,daftar,mesin,laku;};

int main(){
	surat data;
	
	cout<<"=======Masukkan Data========\n";
	cout<<"Nomer registerasi:  ";getline(cin>>ws,data.nomer);
	cout<<"Nama Pemilik     :  ";getline(cin>>ws,data.nama);
	cout<<"Alamat           :  ";getline(cin>>ws,data.alamat);
	cout<<"Merk		 :  ";getline(cin>>ws,data.merk);
	cout<<"Warna	 	 :  ";getline(cin>>ws,data.warna);
	cout<<"Type	   	 :  ";getline(cin>>ws,data.tipe);
	cout<<"Bahan Bakar	 :  ";getline(cin>>ws,data.bahan);
	cout<<"Jenis            :  ";getline(cin>>ws,data.jenis);
	cout<<"Warna TNKB       :  ";getline(cin>>ws,data.tnkb);
	cout<<"Model	 	 :  ";getline(cin>>ws,data.model);
	cout<<"Tahun Registrasi :  ";getline(cin>>ws,data.regis);
	cout<<"Tahun Pembuatan  :  ";getline(cin>>ws,data.buat);
	cout<<"Nomer BPKB	 :  ";getline(cin>>ws,data.bpkb);
	cout<<"Isi Silinder	 :  ";getline(cin>>ws,data.isi);
	cout<<"Kode Lokasi	 :  ";getline(cin>>ws,data.kode);
	cout<<"Nomer Rangka	 :  ";getline(cin>>ws,data.angka);
	cout<<"No Urut Pendaftaran :";getline(cin>>ws,data.daftar);
	cout<<"Nomer Mesin	 :  ";getline(cin>>ws,data.mesin);
	cout<<"Berlaku Sampai   :  ";getline(cin>>ws,data.laku);
	
	system("cls");
	
	cout<<"KEPOLISIAN NEGARA REPUBLIK INDONESIA\t\t\t""A.N. KAPOLDA: 06-01-2017"<<endl;
	cout<<"			  No :   06444148"<<endl;
	cout<<"SURAT TANDA NOMMER KENDARAAN BERMOTOR\t\t\t""DIREKTUR LALU LINTAS"<<endl;
	cout<<"\t\t\t\t\t	   BUDI INDRA DERMAWAN, S.I.K., M.M"<<endl;
	cout<<"\t\t\t\t\t	 ===================================="<<endl;
	cout<<"\t\t\t\t\t		KOMBES POL NRP 70100277"<<endl;
	cout<<"Nomer registerasi:  "<<data.nomer<<endl;
	cout<<"Nama Pemilik     :  "<<data.nama<<endl;
	cout<<"Alamat           :  "<<data.alamat<<endl;
	cout<<"Merk		 :  "<<data.merk<<"\t\t\tWarna	 	 :  "<<data.warna<<endl;
	cout<<"Type		 :  "<<data.tipe<<"\t\t\tBahan Bakar	 :  "<<data.bahan<<endl;
	cout<<"Jenis		 :  "<<data.jenis<<"\t\t\t	Warna TNKB	 :  "<<data.tnkb<<endl;
	cout<<"Model	 	 :  "<<data.model<<"\t\t\tTahun Registrasi :  "<<data.regis<<endl;
	cout<<"Tahun Pembuatan  :  "<<data.buat<<"\t\t\tNomer BPKB	 :  "<<data.bpkb<<endl;
	cout<<"Isi Silinder	 :  "<<data.isi<<"\t\t\t	Kode Lokasi	 :  "<<data.kode<<endl;
	cout<<"Nomer Rangka	 :  "<<data.angka<<"\t\tNo Urut Pendaftaran :  "<<data.daftar<<endl;
	cout<<"Nomer Mesin	 :  "<<data.mesin<<"\t\t\tBerlaku Sampai   :  "<<data.laku<<endl;
}
