#include <iostream>
using namespace std;

string nama[] = {"Adi", "Joko", "Agus"};

float kecepatan[3] = {10.5, 100.3, 25.4};

float waktu[4];

int main(){
  cout << "Data ke-2 = " << nama[1] << endl;
  nama[1]= "Gibran";
  cout << "Data ke-2 = " << nama[1] << endl;
  
  for (int i = 0; i < 3; i++){
  cout << "Kecepatan ke-" << i+1 << " = " << kecepatan[i] << endl;
  }

  for (int i=0; i < 4; i++){
    cout << "Data ke-" << i+1 << endl;
    cout << "Masukkan waktu = ";
    cin >> waktu[1];
  }
  
  cout << endl;
  cout <<"Tampilkan waktu" << endl;
  
  cout << endl;

  for (int i=0; i < 4; i++){
    cout << "Waktu ke-" << i+1 << " = " << waktu[i] << endl;
  }
}