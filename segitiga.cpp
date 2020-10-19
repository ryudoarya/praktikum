//R. Yudo Arya Kusuma//
/*20051397013*/

#include<iostream>
#include<math.h>

using namespace std;

main()
{
	int pil,sisi1,sisi2,sisi3,keliling,panjang,luas;
	char ulang;
 do{

	cout<<endl;
	cout<<"= = = = = = = = = = = = = = = = = = = = = = = =\n"<<endl;
    cout<<"-----------MENU SEGITIGA SIKU-SIKU-------------\n"<<endl;
    cout<<"--------------R.Yudo Arya Kusuma---------------\n"<<endl;
    cout<<"-----------------20051397013-------------------\n"<<endl;
	cout<<"= = = = = = = = = = = = = = = = = = = = = = = ="<<endl;
	cout<<"1. Hitung Panjang Sisi Miring"<<endl;
	cout<<"2. Hitung luas"<<endl;
	cout<<"3. Hitung Keliling"<<endl;
	cout<<"4. Keluar Program"<<endl;
	cout<<"= = = = = = = = = = = = = = = = = = = = = = = ="<<endl;

	cout<<"masukan pilihan anda \t:";
	cin>>pil;
	switch (pil){
	
	
	case 1:	cout<<"Masukkan alas segitiga   \t: ";
			cin>>sisi1;
			cout<<"Masukkan tinggi segitiga \t: ";
			cin>>sisi2;
			panjang=sqrt((sisi1*sisi1)+(sisi2*sisi2));
			cout<<"Panjang sisi miring adalah \t: "<<panjang;
			break;
	case 2: cout<<"Masukkan alas segitiga   \t: ";
            cin>>sisi1;
            cout<<"Masukkan tinggi segitiga \t: ";
            cin>>sisi2;
            luas=sisi1*sisi2/2;
            cout<<"Luas segitiga adalah \t: "<<luas;
            break;
    case 3: cout<<"Masukkan panjang sisi alas \t: ";
            cin>>sisi1;
            cout<<"Masukkan panjang sisi tinggi \t: ";
            cin>>sisi2;
            cout<<"Masukkan panjang sisi miring \t: ";
            cin>>sisi3;
            keliling=sisi1+sisi2+sisi3;
            cout<<"Keliling Segitiga adalah \t: "<<keliling;
            break;
    case 4: cout<<"Yakin mau Keluar?(Y/T)";
    		cin>>ulang;
    		break;
    default:cout<<"Maaf Inputan Salah";
			break;
} 
}
	while (ulang=='t'||ulang=='T');
			cout<<endl;	
			cout<<"\nTerimah Kasih <3 ";
	
	}


