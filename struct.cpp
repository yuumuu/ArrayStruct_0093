#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan NIM       = ";
    cin >> mhs.nim;
    cout << "Masukkan Nama      = ";
    cin >> mhs.nama;
    cout << "Masukkan Alamat    = ";
    cin >> mhs.alamat;

    cout << endl;
    cout << "Menampilkan Data" << endl;
    cout << endl;
    
    cout << "NIM        = " << mhs.nim << endl;
    cout << "Nama       = " << mhs.nama << endl;
    cout << "Alamat     = " << mhs.alamat << endl;
}