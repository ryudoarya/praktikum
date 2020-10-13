#include <iostream>
using namespace std;

int main()
{
	int j1,j2,m1,m2,d1,d2,nomorkomputer,jml,jumlahdetik;
	int tarif=5000;
	string nama;
	
	cout<<"================================================"<<endl;
	cout<<"--------Pembayaran Warnet--------\n"<<endl;
	cout<<"-------R. Yudo Arya Kusuma--------\n"<<endl;
	cout<<"-----------20051397013--------\n"<<endl;
	cout<<"================================================"<<endl;
	
	cout<<"masukan nomor komputer \t:";
	cin>>nomorkomputer;
	cout<<"masukan namapengguna \t:";
	cin>>nama;
	cout<<"Masukkan waktu mulai   \t:"<<endl;
	cout<<"Jam   ="; 
	cin>>j1;
	cout<<"Menit ="; 
	cin>>m1;
	cout<<"Detik ="; 
	cin>>d1;
	cout<<"Masukkan waktu selesai \t:"<<endl;
	cout<<"Jam   =";
	cin>>j2;
	cout<<"Menit =";
	cin>>m2;
	cout<<"Detik =";
	cin>>d2;
	jumlahdetik = ((j2-j1) * 3600) + ((m2-m1) * 60) + (d2-d1);
	jml = jumlahdetik * tarif / 3600 ;
	
	cout<<"Kepada Yth : "<<nama<<endl;
	cout<<"Total tagihan = Rp"<<jml;

	cout << endl;
	
}
