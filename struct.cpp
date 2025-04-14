#include <iostream>
using namespace std;

struct buku{
  string judul;
  string jumalahHalaman;
  string pengarang;
};

int main(){
  buku bk;

  cout << "Masukkan judul = ";
  cin >> bk.judul;
  cout << "Masukkan jumlah halamna = ";
  cin >> bk.jumalahHalaman;
  cout << "Masukkan pengarang = ";
  cin >> bk.pengarang;


  cout << endl;
  cout << "Tampilkan data buku" << endl << endl;
  cout << "Judul buku = " << bk.judul << endl;
  cout << "Jumlah halaman buku = " << bk.jumalahHalaman << endl;
  cout << "Pengarang buku = " << bk.pengarang << endl; 
}