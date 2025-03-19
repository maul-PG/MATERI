#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

struct Lagu {
    char judul[100];
    char penyanyi[100];
    char genre[50];
    int tahun;
};

vector<Lagu> daftarLagu;

void simpanKeFileBiner() {
    FILE* file = fopen("list_lagu.dat", "wb");
    if (!file) {
        cout << "Gagal menyimpan file!\n";
        return;
    }
    fwrite(daftarLagu.data(), sizeof(Lagu), daftarLagu.size(), file);
    fclose(file);
    cout << "Daftar lagu berhasil disimpan ke file biner!\n";
}

void tambahLagu() {
    Lagu lagu;
    cout << "Masukkan Judul Lagu      : "; cin.getline(lagu.judul, 100);
    cout << "Masukkan Penyanyi        : "; cin.getline(lagu.penyanyi, 100);
    cout << "Masukkan Genre Lagu      : "; cin.getline(lagu.genre, 50);
    cout << "Masukkan Tahun Lagu      : "; cin >> lagu.tahun;
    cin.ignore();
    daftarLagu.push_back(lagu);
    

    simpanKeFileBiner();
}

void tampilkanLagu() {
    cout << "File berhasil dibuka\n";
    for (const auto& lagu : daftarLagu) {
        cout << ">. " << lagu.judul << "\n";
    }
}

void cariLagu() {
    char judul[100];
    cout << "Masukkan judul lagu yang dicari : ";
    cin.getline(judul, 100);
    
    cout << "File berhasil dibuka\n";
    for (const auto& lagu : daftarLagu) {
        if (string(lagu.judul) == string(judul)) {
            cout << " Judul Lagu : " << lagu.judul << "\n";
            cout << " Penyanyi   : " << lagu.penyanyi << "\n";
            cout << " Genre      : " << lagu.genre << "\n";
            cout << " Tahun      : " << lagu.tahun << "\n";
            return;
        }
    }
    cout << "Lagu tidak ditemukan!\n";
}

void editLagu() {
    char judul[100];
    cout << "Masukkan judul lagu yang akan diedit : ";
    cin.getline(judul, 100);
    
    for (auto& lagu : daftarLagu) {
        if (string(lagu.judul) == string(judul)) {
            cout << "Masukkan Judul Lagu      : "; cin.getline(lagu.judul, 100);
            cout << "Masukkan Penyanyi        : "; cin.getline(lagu.penyanyi, 100);
            cout << "Masukkan Genre Lagu      : "; cin.getline(lagu.genre, 50);
            cout << "Masukkan Tahun Lagu      : "; cin >> lagu.tahun;
            cin.ignore();
            cout << "Lagu berhasil diperbarui!\n";

            
            simpanKeFileBiner();
            return;
        }
    }
    cout << "Lagu tidak ditemukan!\n";
}

void menu() {
    int pilihan;
    do {
        cout << "\n  Playlist Lagu\n";
        cout << "====================\n";
        cout << "1. Tambah Lagu\n";
        cout << "2. Edit Lagu\n";
        cout << "3. Tampilkan Lagu\n";
        cout << "4. Cari Lagu\n";
        cout << "5. Keluar\n";
        cout << "Pilih Menu : ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: tambahLagu(); break;
            case 2: editLagu(); break;
            case 3: tampilkanLagu(); break;
            case 4: cariLagu(); break;
            case 5: cout << "Keluar...\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 5);
}

int main() {
    menu();
    return 0;
}
