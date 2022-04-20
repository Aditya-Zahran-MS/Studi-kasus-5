#include <iostream>
using namespace std;

class sks{
public:
  void input();
  void proses();
  void output();
  void hitung(int a[], int b, int total); //fungsi rekursif

private:
  string daftar_matkul[30], nama, nim,matskul;
  int sks,total_sks, diskon, jumlah_bayar,matkul;
};


void sks::proses() {
  matkul=0;
  hitung(total_sks, matkul, sks);
  sks=total_sks*150000;
  diskon = sks*0.25;
  jumlah_bayar=sks-diskon;
}

void sks::hitung(int a[], int b, int total) {
  if(b>0) {
    int total = total+a[b-1];
  }
  else {
    hitung(a, b-1, total);
  }
}

void sks::input(){
  cout<<"========="<<endl;
  cout<<"SKS"<<endl;
  cout<<"========="<<endl;
  cout<<"Masukkan Nim  : ";cin>>nim;
  cout<<"Masukkan Nama  : ";cin>>nama;
  cout<<"Masukkan jumlah matkul : ";cin>>matkul;
  for(int i=0;i<=matkul;i++)
    {
      cout<<"Masukkan jumlah SKS  : ";cin>>total_sks[i];
      cout<<"Matkul : ";cin>>matskul[i];
    }
}

void sks::output()
{
  // int diskon, jumlah_bayar;
  // jumlah_bayar = 300000;
  // diskon = 75000;
  cout<<"Masukan total bayar : "<<jumlah_bayar<<endl;
  cout<<"Diskon : "<<diskon;
}
