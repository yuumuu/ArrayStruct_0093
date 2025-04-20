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

int main(){
    Mahasiswa mhs[2];

    for(int i = 0; i < 2; i++) {
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "Masukkan NIM           = ";
        cin >> mhs[i].nim;
        cin.ignore();
        cout << "Masukkan Nama          = ";
        getline(cin, mhs[i].nama);
        cout << "Masukkan Alamat Kota   = ";
        cin >> mhs[i].alamat.kota;
        cout << "Masukkan Alamat Provinsi   = ";
        cin >> mhs[i].alamat.provinsi;
    }

    cout << endl;

    cout << "Data Mahasiswa" << endl;
    
    for (int i = 0; i < 2; i++) {
    cout << "Data Mahasiswa ke-" << i+1 << endl;
    cout << "NIM            = " << mhs[i].nim << endl;
    cout << "Nama           = " << mhs[i].nama << endl;
    cout << "Alamat Kota    = " << mhs[i].alamat.kota << endl;
    cout << "Alamat Provinsi= " << mhs[i].alamat.provinsi << endl;
    }
}