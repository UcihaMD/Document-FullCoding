#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void tulisKeFile(const string& namaFile, const string& konten) {
    ofstream file;
    file.open(namaFile, ios::app); // Buka file dengan mode append
    if (file.is_open()) {
        file << konten << endl;
        file.close();
        cout << "Data berhasil ditulis ke file." << endl;
    } else {
        cout << "Tidak dapat membuka file untuk menulis." << endl;
    }
}

void bacaDariFile(const string& namaFile) {
    ifstream file(namaFile);
    string baris;
    if (file.is_open()) {
        while (getline(file, baris)) {
            cout << baris << endl;
        }
        file.close();
    } else {
        cout << "Tidak dapat membuka file untuk membaca." << endl;
    }
}

int main() {
    string namaFile = "data.txt";
    string nama, email, pesan;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Email: ";
    getline(cin, email);
    cout << "Masukkan Pesan: ";
    getline(cin, pesan);

    string konten = "Nama: " + nama + "\nEmail: " + email + "\nPesan: " + pesan;

    tulisKeFile(namaFile, konten);
    cout << "\nIsi file " << namaFile << ":" << endl;
    bacaDariFile(namaFile);

    return 0;
}
