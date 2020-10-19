//R. Yudo Arya Kusuma//
//menghitung gaji//

#include<iostream>
#include<conio.h>
	
	using namespace std;
	
	char pilihan,nama[50];
	int jumlah,total,sisa,sisa1;
	int jam=0;
	
	int main()
{
		cout<<"===================================="<<endl;
		cout<<"==PROGRAM MENGHITUNG GAJI KARYAWAN=="<<endl;
		cout<<"====((GOLONGAN A, B, C, DAN D))====="<<endl;
		cout<<"===================================="<<endl;
			cout<<"Nama Karyawan \t;"<<endl;
			cin>>nama;
			cout<<"Golongan \t:"<<endl;
			cin>>pilihan;
			cout<<"Jumlah Jam Kerja"<<endl;
			cin>>jam;
		cout<<"===================================="<<endl;
		cout<<endl;
			
				if (pilihan=='A'||pilihan=='a')
				{
					jumlah=5000;
				}
				else if (pilihan=='B'||pilihan=='b')
				{
					jumlah=7000;
				}
				else if (pilihan=='c'||pilihan=='c')
				{
					jumlah=8000;
				}
				else if (pilihan=='D'||pilihan=='d')
				{
					jumlah=10000;
				}
				
				if (jam>48)
				{
				sisa = jam - 48;
				sisa1 = jumlah * (jam-sisa);
				total = 4000 * sisa;
				jumlah = sisa1 + total;
				}
				else 
				{
					jumlah=jumlah*jam;
				}
				
		cout<<"Nama Karyawan \t:"<<nama<<endl;
		cout<<"Total Gaji \t:"<<jumlah<<endl;

				
				
}
