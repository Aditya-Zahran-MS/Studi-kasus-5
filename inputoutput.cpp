#include "../base.h"

  void sks::input(){
  int total_sks[20], nim, matkul;
  string matskul[20], nama;
  cout<<"========="<<endl;
  cout<<"|| SKS ||"<<endl;
  cout<<"========="<<endl;
  cout<<"Daftar Matkul"<<endl;
  cout<<"1. Alpro"<<endl;
  cout<<"2. Pweb"<<endl;
  cout<<"3. Matdisk"<<endl;
  cout<<"4. Alin"<<endl;
  cout<<"5. Arsikomp"<<endl;
  cout<<"Masukkan Nim  : ";cin>>nim;
  cout<<"Masukkan Nama  : ";cin>>nama;
  cout<<"Masukkan jumlah matkul : ";cin>>matkul;
  cout<<"=========================="<<endl;
  for(int i=0;i<matkul;i++)
    {
      cout<<"Nama Matkul : ";cin>>matskul[i];
      cout<<"Masukkan jumlah SKS per matkul : ";cin>>total_sks[i];
    }
  cout<<"=========================="<<endl;
    }
void sks::output()
{
  int jumlah_bayar = 300000;
  int diskon = 75000;
  cout<<"Masukan total bayar : "<<jumlah_bayar<<endl;
  cout<<"Diskon : "<<diskon;
}

int main()
{
  sks esks;
  esks.input();
  esks.output();
}
