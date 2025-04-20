#include <iostream>
using namespace std;

struct DetailAlamat {
    string kota;
    string provinsi;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
};

int main() {
    Mahasiswa mhs[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Masukkan NIM               = ";
        cin >> mhs[i].nim;
        cout << "Masukkan Nama              = ";
        cin >> mhs[i].nama;
        cout << "Masukkan Alamat Kota       = ";
        cin >> mhs[i].alamat.kota;
        cout << "Masukkan Alamat Provinsi   = ";
        cin >> mhs[i].alamat.provinsi;
    }

    cout << endl;
    cout << "Data Mahasiswa" << endl;
    cout << endl;

    for (int i = 0; i < 2; i++)
    { 
        cout << "NIM            = " << mhs[i].nim << endl;
        cout << "Nama           = " << mhs[i].nama << endl;
        cout << "Alamat Kota    = " << mhs[i].alamat.kota << endl;
        cout << "Alamat Provinsi= " << mhs[i].alamat.provinsi << endl;
    }
}