//R. Yudo Arya Kusuma//
//*//20051397013//*//
//////MI-2020A//////

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int hasil = 0, a, b, kali;
	
		cout<<"===================================="<<endl;
		cout<<"========||MENGHITUNG SUKU||========="<<endl;
		cout<<"===================================="<<endl;
	cout <<"\n";
	cout <<"Masukkan Jumlah Nilai Suku : ";
	cin >>b;
	
	for(a = 1; a <= b; a++)
{
		hasil = hasil + a * a * a;	
		kali = a * a * a;
		cout << kali <<"\n";
}
cout <<"Jumlah Total : ";
cout <<hasil;
cin >> b;

    getch ();
	return 0;
}
