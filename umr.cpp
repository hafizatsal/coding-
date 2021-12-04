#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	system ("color E");
	
	cout<<"_____________________________________"<<endl;
	cout<<"______PENDAPATAN GAJI KARYAWAN_______"<<endl;
	cout<<"             BY HAFIZ                "<<endl;
	cout<<"_____________________________________"<<endl;
	
	double Gaji, UMR;
	string keterangan, Namanya;
	cout<<"Masukan Nama Karyawan: ";getline(cin,Namanya);
	cout<<"Masukan Gaji Karyawan: ";cin>>Gaji;
	cout<<"Masukan UMR Daerah   : ";cin>>UMR;
	
	cout<<endl<<endl;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<"$$$$$$>>INILAH GAJI KARYAWAN<<$$$$$$"<<endl;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl<<endl<<endl;
	if (Gaji>UMR){keterangan = " diatas";}
	    else if (Gaji==UMR){keterangan = " Setara";}
		else if (Gaji<UMR){keterangan = " Dibawah";}
		
		cout<<"Dari Semua Data Yang Dikumpulkan Gaji Si "<<Namanya<<keterangan<<" UMR"<<endl;
		
		getch();
		return 0;
		}
