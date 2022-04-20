#include "../base.h"
using namespace std;

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

void sks::hitung(int s[], int n[]) {
  
}

int main () {
  sks esks;
  esks.proses();
  // cout<<"Ok";
}
