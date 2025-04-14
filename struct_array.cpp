#include <iostream>
#include <string>
using namespace std;

struct buku{
  string judul;
  string jumalahHalaman;
  string pengarang;
};

int main(){
  buku bk[2];

  for(int i = 0; i < 2; i++){
    cout << "Masukkan judul = ";
    getline(cin, bk[i].judul);
    cout << "Masukkan jumlah halaman = ";
    cin >> bk[i].jumalahHalaman;
    cin.ignore();
    cout << "Masukkan pengarang = ";
    getline(cin, bk[i].pengarang);
  }

  cout << endl;
  cout << "Tampilkan data buku" << endl;
  cout << endl;

  for(int i = 0; i < 2; i++){
  cout << "Judul buku = " << bk[i].judul << endl;
  cout << "Jumlah halaman buku = " << bk[i].jumalahHalaman << endl;
  cout << "Pengarang buku = " << bk[i].pengarang << endl;
  }
   
}