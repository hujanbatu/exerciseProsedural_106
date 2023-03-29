#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    int nilaiMatematika;
    int nilaiBahasaInggris;
    bool diterima;
};

int main() {
    const int JUMLAH_MAHASISWA = 20;

    Mahasiswa mahasiswa[JUMLAH_MAHASISWA];

    // Input nilai mahasiswa
    for (int i = 0; i < JUMLAH_MAHASISWA; i++) {
        cout << "Masukkan nama mahasiswa ke-" << i+1 << ": ";
        cin >> mahasiswa[i].nama;

        cout << "Masukkan nilai matematika mahasiswa ke-" << i+1 << ": ";
        cin >> mahasiswa[i].nilaiMatematika;

        cout << "Masukkan nilai bahasa Inggris mahasiswa ke-" << i+1 << ": ";
        cin >> mahasiswa[i].nilaiBahasaInggris;

        // Cek apakah diterima
        if ((mahasiswa[i].nilaiMatematika + mahasiswa[i].nilaiBahasaInggris) / 2 >= 70 || mahasiswa[i].nilaiMatematika > 80) {
            mahasiswa[i].diterima = true;
        }
        else {
            mahasiswa[i].diterima = false;
        }
    }

    // Tampilkan daftar mahasiswa yang diterima/ditolak
    int diterima = 0;
    int ditolak = 0;
    cout << "\nDaftar Mahasiswa yang Diterima/Ditolak:\n";
    for (int i = 0; i < JUMLAH_MAHASISWA; i++) {
        string status;
        if (mahasiswa[i].diterima) {
            status = "Diterima";
            diterima++;
        }
        else {
            status = "Ditolak";
            ditolak++;
        }

        cout << mahasiswa[i].nama << "\t" << status << endl;
    }

    cout << "\nJumlah mahasiswa yang diterima: " << diterima << endl;
    cout << "Jumlah mahasiswa yang ditolak: " << ditolak << endl;

    return 0;
}