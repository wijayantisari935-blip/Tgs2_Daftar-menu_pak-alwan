#include <iostream>
#include <iomanip>

using namespace std;

void tampilkanMenu() {
    cout << "=========================\n";
    cout << "     MINI KASIR SOTO     \n";
    cout << "=========================\n";
    cout << "1. Soto  - Rp 15.000\n";
    cout << "2. Rawon - Rp 20.000\n";
    cout << "0. Selesai & Hitung Total\n";
    cout << "=========================\n";
}

int main() {
    int pilihan, jumlah;
    long long totalHarga = 0;

    do {
        tampilkanMenu();
        cout << "Pilih menu (1/2/0): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan jumlah Soto: ";
                cin >> jumlah;
                totalHarga += 15000 * jumlah;
                cout << jumlah << " Soto berhasil ditambahkan.\n\n";
                break;
            case 2:
                cout << "Masukkan jumlah Rawon: ";
                cin >> jumlah;
                totalHarga += 20000 * jumlah;
                cout << jumlah << " Rawon berhasil ditambahkan.\n\n";
                break;
            case 0:
                cout << "Menghitung total belanja...\n\n";
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi.\n\n";
        }
    } while (pilihan != 0);

    cout << "=========================\n";
    cout << "TOTAL BAYAR: Rp " << totalHarga << "\n";
    cout << "=========================\n";
    cout << "Terima kasih telah berkunjung!\n";

    return 0;
}
