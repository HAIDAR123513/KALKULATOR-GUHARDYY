#include <iostream>
using namespace std;

int main() {
	float a,b;
	int kode;
	
	menu:
		system("cls");
		cout<<"KALKULATOR SEDERHANA\n";
		cout<<"oleh HAIDAR GUHARDY MUHAMMAD\n";
		cout<<"\n\n";
		cout<<"1.pernjumlahan (+)\n";
		cout<<"2.pengurangan (-)\n";
		cout<<"3.perkalian (x)\n";
		cout<<"4.pembagian (:)\n";
		cout<<"masukkan pilihan anda: ";
		cin>>kode;
		
		if (kode >4 || kode<1) {
			cout<<"maaf pilihan anda tak tersedia";
			goto menu;
		}
		else {
			cout<<"masukkan angka pertama: ";
			cin>>a;
			cout<<"masukkan angka kedua: ";
			cin>>b;
			
			if(kode==1) {
				cout<<"maka hasil penjumlahan dari "<<a<< " + " <<b<< " adalah " <<a+b<<endl;
			}
			else if (kode==2) {
				cout<<"maka hasil pengurangan dari "<<a<< " - " <<b<< " adalah " <<a-b<<endl;
			}
			else if (kode==3) {
				cout<<"maka hasil penjumlahan dari "<<a<< " x " <<b<< " adalah " <<a*b<<endl;
			}
			else if(kode==4) {
				cout<<"maka hasil pembagian dari "<<a<< " : " <<b<< " adalah " <<a/b<<endl;
			}
		}
		char hh;
		cout<<"apakah anda ingin menggunakan operasi lain?  y/n\n";
		cout<<"masukkan: ";
		cin>>hh;
		if(hh=='y') {
			goto menu;
		}
		else {
			return 0;
		}
		
		return 0;
}
