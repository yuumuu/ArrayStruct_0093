#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
};

int main(){
    Mahasiswa mhs;

    cout << "Masukkan NIM           = ";
    cin >> mhs.nim;
    cout << "Masukkan Nama          = ";
    cin >> mhs.nama;
    cout << "Masukkan Alamat Desa   = ";
    cin >> mhs.alamat.desa;
    cout << "Masukkan Alamat Kota   = ";
    cin >> mhs.alamat.kota;
    cout << endl;

    cout << "Data Mahasiswa" << endl;
    cout << "NIM            = " << mhs.nim << endl;
    cout << "Nama           = " << mhs.nama << endl;
    cout << "Alamat Desa    = " << mhs.alamat.desa << endl;
    cout << "Alamat Kota    = " << mhs.alamat.kota << endl;
}