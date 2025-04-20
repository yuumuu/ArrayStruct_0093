#include <iostream>
using namespace std;

//membuat struct untuk detail alamat
struct DetailAlamat{
    string desa;
    string kota;
};

//membuat struct mahasiswa
struct Mahasiswa{
    string nim;
    string nama;
    DetailAlamat alamat;
};

int main(){
    Mahasiswa mhs;

    cout << "Masukkan NIM           = ";
    cin >> mhs.nim;
    cin.ignore();
    cout << "Masukkan Nama          = ";
    getline(cin, mhs.nama);
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