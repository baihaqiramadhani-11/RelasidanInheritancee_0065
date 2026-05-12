#include <iostream>
#include <string>

using namespace std;

// deklarasi class mahasiswa
class Mahasiswa {
    // membuat member class private
private:
    const int id;
    string nama;
    float nilai;

  // membuat member class public
public:
    // membuat member initialization list dari class mahasiswa
    Mahasiswa(int pId, string pNama, float pNilai) : id(pId), nama(pNama), nilai(pNilai) {
        // kode di sini dijalankan setelah variabel diinisialisasi
    };

  // membuat destructor dari class mahasiswa
    ~Mahasiswa() {
        cout << "ID    : " << id << endl;
        cout << "Nama  : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
};