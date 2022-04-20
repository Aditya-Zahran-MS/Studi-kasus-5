//#include "../base.h"
#include<iostream>
using namespace std;
class Sks{
public:
  void input();
  void output();
private:
  int total_sks[20], nim, matkul;
  string matskul[20], nama;
 // int diskon, jumlah_bayar;
  int jumlah_bayar = 300000;
  int diskon = 75000;
};
  void Sks::input(){
  
  cout<<"========="<<endl;
  cout<<"SKS"<<endl;
  cout<<"========="<<endl;
  cout<<"Daftar Matkul"
  cout<<"Masukkan Nim  : ";cin>>nim;
  cout<<"Masukkan Nama  : ";cin>>nama;
  cout<<"Masukkan jumlah matkul : ";cin>>matkul;
  for(int i=0;i<=matkul;i++)
    {
      cout<<"Masukkan jumlah SKS  : ";cin>>total_sks[i];
      cout<<"Matkul : ";cin>>matskul[i];
    }
  
    }
void Sks::output()
{
  cout<<"Masukan total bayar : "<<jumlah_bayar<<endl;
  cout<<"Diskon : "<<diskon;
}

int main()
{
  Sks esks;
  esks.input();
  esks.output();
}
