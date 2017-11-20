#include <iostream>

using namespace std;

int main(){
	int panjang, lebar, luas ,pilihan, alas, tinggi;
	int gpkk,jk;
	int lbr,gt,pjk,gk;
	int x;
	double Tinggi, berat;
	char yt;
	atas:
	cout <<"---------------------------------\n";
	cout <<"1.Persegi panjang		|\n";
	cout <<"2.Segitiga			|\n";
	cout <<"3.Perhitungan berat badan	|\n";
	cout <<"4.Penentuan Nilai		|\n";
	cout <<"5.Perhitungan Gaji Karyawan	|\n";
	cout <<"---------------------------------\n";
	cout <<"Masukan Pilihan =";cin >>pilihan;
	
	switch(pilihan){
		case 1:
		cout<<"masukan panjang =";cin>>panjang;
		cout<<"masukan lebar =";cin>>lebar;
		luas =panjang * lebar;
		cout<<"luas persegi panjang="<<luas<<"\n";
		cout<<"Kembali..?? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih"<<endl;
		break;
		case 2:
		cout<<"Masukkan panjang alas Segitiga=";cin>>alas;
		cout<<"Masukkan tinggi Segitiga=";cin>>tinggi;
		luas=0.5*alas*tinggi;
		cout<<"luas Segitiga ="<<luas<<"\n";
		cout<<"Kembali..?? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih"<<endl;
		break;
		case 3:
		cout <<"Perhitungan berat badan\n";
		cout <<"Masukkan berat badan : ";cin >>berat;
		cout <<"Masukkan tinggi badan : ";cin >>Tinggi;
	
		cout <<"Hasil \n";
		cout <<"Berat badan : "<<berat<<endl;
		cout <<"Tinggi badan : "<<Tinggi<<endl;
	
		if (berat<Tinggi/2.5){
		cout <<"Underweight";
		}else if (Tinggi/2.3<berat){
		cout <<"Overweight";
		}else if (Tinggi/2.5 <=berat <=Tinggi/2.3){
		cout <<"Normal!!";
		}
		cout<<"\n";
		cout<<"Kembali..?? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih"<<endl;
		break;
		case 4:
		cout <<"Masukkan Nilai : ";cin >>x;
	
		if (x>0){
		cout <<"Nilai positif";
		}else if (x<0){
		cout <<"Nilai negatif";
		}else {
		cout <<"Nilai nol !!";
		}
		cout<<"\n";
		cout<<"Kembali..?? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih"<<endl;
		break;
		case 5:
		cout <<"Perhitungan Gaji Karyawan "<<endl;
		cout <<"Masukkan Gaji Pokok : Rp. ";cin >>gpkk;
		cout <<"Masukkan Jam Kerja : ";cin >>jk;
		lbr=jk-40;
		gt=(lbr*1.5+40)*gpkk;
		pjk=gt*0.15;
		gk=gt-pjk;
	
		cout <<"Hasil Perhitungan Gaji"<<endl;
		cout <<"Gaji Pokok	: Rp. "<<gpkk<<endl;
		cout <<"Jam Kerja 	: "<<jk<<endl;
		cout <<"Jam Lembur	: "<<lbr<<endl;
		cout <<"Gaji sebelum dipotong pajak : Rp. "<<gt<<endl;
		cout <<"Total Gaji 	: Rp. "<<gk;
		cout<<"\n";
		cout<<"Kembali..?? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih"<<endl;
	}	
}
