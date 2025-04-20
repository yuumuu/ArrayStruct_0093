#include <iostream>
using namespace std;

struct Alamat {
    string desa;
    string kecamatan;
    string kabupaten;
    string provinsi;
    string kode_pos;
};

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    Alamat alamat;
};

Mahasiswa inputData() {
    Mahasiswa mhs;

    cout << "NIM        : ";
    getline(cin, mhs.nim);
    cout << "Nama       : ";
    getline(cin, mhs.nama);
    cout << "Jurusan    : ";
    getline(cin, mhs.jurusan);

    cout << "Alamat\n";
    cout << "Desa       : ";
    getline(cin, mhs.alamat.desa);
    cout << "Kecamatan  : ";
    getline(cin, mhs.alamat.kecamatan);
    cout << "Kabupaten  : ";
    getline(cin, mhs.alamat.kabupaten);
    cout << "Provinsi   : ";
    getline(cin, mhs.alamat.provinsi);

    return mhs;
}

void outputData(const Mahasiswa& mhs) {
    cout << endl << "==========================" << endl;
    cout << "NIM        : " << mhs.nim << endl;
    cout << "Nama       : " << mhs.nama << endl;
    cout << "Jurusan    : " << mhs.jurusan << endl;
    cout << "Alamat\n";
    cout << "Desa       : " << mhs.alamat.desa << endl;
    cout << "Kecamatan  : " << mhs.alamat.kecamatan << endl;
    cout << "Kabupaten  : " << mhs.alamat.kabupaten << endl;
    cout << "Provinsi   : " << mhs.alamat.provinsi << endl;
    cout << "Kode Pos   : " << mhs.alamat.kode_pos << endl;
    cout << "==========================" << endl << endl;
}

int main() {
    Mahasiswa mhs = inputData();
    outputData(mhs);

    return 0;
}