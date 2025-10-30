#include <iostream>
using namespace std;

int main(){
	int detik;
    
	cout<<"Masukan angka >1 (dalam satuan detik) =";
	cin>>detik;
	
	long long jam = detik / 3600;
	long long sisa_detik = detik % 3600;
	long long menit = sisa_detik / 60;
	long long detik_akhir = sisa_detik % 60;
	
	cout<<endl;
    cout<<"Hasil Konversi :"<<endl;
    cout<<detik<<" "<<"Detik ="<<" "<<jam<<" "<<"Jam, "<<menit<<" "<<"Menit, "<<detik_akhir<<" "<<"detik. "<<endl;
    
    return 0;
}
