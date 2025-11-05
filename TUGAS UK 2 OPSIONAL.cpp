#include <iostream>
using namespace std;

int main(){
	long long detik;

	cout<<"=============================================="<<endl;
	cout<<"|TUGAS UJI KOMPETENSI DASAR DASAR PEMROGRAMAN|"<<endl;
	cout<<"=============================================="<<endl;
	cout<<"Masukan Detik= ";
	cin>>detik;
	cout<<"======================"<<endl;
	
	long long hari = detik / 86400;
	long long sisa_detik = detik % 86400;
	long long jam = sisa_detik / 3600;
	sisa_detik = detik % 3600;
	long long menit = sisa_detik / 60;
	long long detik_akhir = sisa_detik % 60;
	
	cout<<endl;
	cout<<"====================="<<endl;
    cout<<"|   Hasil Konversi  |"<<endl;
	cout<<"====================="<<endl;
    cout<<detik<<" "<<"Detik ="<<" "<<hari<<" "<<"Hari, "<<jam<<" "<<"Jam, "<<menit<<" "<<"Menit, "<<detik_akhir<<" "<<"detik. "<<endl;
    cout<<"================================================"<<endl;
	
    return 0;
}


