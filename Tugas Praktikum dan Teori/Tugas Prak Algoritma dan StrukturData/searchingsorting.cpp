#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Lagu {
    string judul;
    string penyanyi;
    string genre;
    int tahun;
};

vector<Lagu> daftarLagu;
void tampilkanDaftarLagu() {
    sort(daftarLagu.begin(), daftarLagu.end(), [](Lagu a, Lagu b) {
        return a.judul < b.judul;
    });

    cout << "\n   Playlist Lagu   " << endl;
    cout << "====================" << endl;
    
    if (daftarLagu.empty()) {
        cout << "Belum ada lagu dalam daftar.\n";
    } else {
        for (int i = 0; i < daftarLagu.size(); i++) {
            cout << i + 1 << ". " << daftarLagu[i].judul << " - " << daftarLagu[i].penyanyi << endl;
        }
    }
    cout << "====================\n" << endl;
}

void tambahLagu() {
    int jumlah;
    cout << "Masukkan jumlah lagu yang ingin diinput : ";
    cin >> jumlah;
    cin.ignore();

    for (int i = 0; i < jumlah; i++) {
        Lagu laguBaru;
        
        cout << "\n==================================" << endl;
        cout << " Masukkan Lagu ke-" << i + 1 << endl;
        cout << "==================================" << endl;
        
        cout << " Masukkan Judul Lagu  : ";
        getline(cin, laguBaru.judul);
        
        cout << " Masukkan Penyanyi    : ";
        getline(cin, laguBaru.penyanyi);
        
        cout << " Masukkan Genre Lagu  : ";
        getline(cin, laguBaru.genre);
        
        cout << " Masukkan Tahun Lagu  : ";
        cin >> laguBaru.tahun;
        cin.ignore(); 
        
        daftarLagu.push_back(laguBaru);
    }

    cout << "\nLagu berhasil ditambahkan!\n\n";
}

void cariLagu() {
    string cariJudul;
    cin.ignore();
    cout << "Masukkan Judul Lagu yang dicari: ";
    getline(cin, cariJudul);

    bool ditemukan = false;
    for (Lagu lagu : daftarLagu) {
        if (lagu.judul == cariJudul) {
            cout << "\n==================================" << endl;
            cout << "           Data Ditemukan!        " << endl;
            cout << "==================================" << endl;
            cout << " Judul Lagu  : " << lagu.judul << endl;
            cout << " Penyanyi    : " << lagu.penyanyi << endl;
            cout << " Genre       : " << lagu.genre << endl;
            cout << " Tahun       : " << lagu.tahun << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "\n==================================" << endl;
        cout << "         Data Tidak Ditemukan     " << endl;
        cout << "==================================" << endl;
    }

    int kembali;
    do {
        cout << "\nKembali ke menu? (1. Ya / 2. Tidak): ";
        cin >> kembali;
        if (kembali == 2) {
            cout << "Keluar dari program.\n";
            exit(0);
        }
    } while (kembali != 1);
}

int main() {
    int pilih;
    
    do {
        tampilkanDaftarLagu();
        
        cout << "1. Tambah Lagu" << endl;
        cout << "2. Cari Lagu" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih Menu : ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                tambahLagu();
                break;
            case 2:
                cariLagu();
                break;
            case 3:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi.\n";
        }

    } while (pilih != 3);

    return 0;
}
