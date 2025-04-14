#include <iostream>
#include <string>
using namespace std;

struct pengarang{
  string nama;
  string alamat;
};

struct buku{
  string judul;
  string jumalahHalaman;
  pengarang pengarang;
};

int main(){
  buku bk[2];

  for(int i = 0; i < 2; i++){
    cout << "Masukkan judul = ";
    getline(cin, bk[i].judul);
    cout << "Masukkan jumlah halaman = ";
    cin >> bk[i].jumalahHalaman;
    cin.ignore();
    cout << "Masukkan nama pengarang = ";
    getline(cin, bk[i].pengarang.nama);
    cout << "Masukkan alamat pengarang = ";
    getline(cin, bk[i].pengarang.alamat);
  }

  cout << endl;
  cout << "Tampilkan data buku" << endl;
  cout << endl;

  for(int i = 0; i < 2; i++){
  cout << "Judul buku = " << bk[i].judul << endl;
  cout << "Jumlah halaman buku = " << bk[i].jumalahHalaman << endl;
  cout << "Nama pengarang buku = " << bk[i].pengarang.nama << endl;
  cout << "Alamat pengarang buku = " << bk[i].pengarang.alamat << endl << endl;
  }
   
}