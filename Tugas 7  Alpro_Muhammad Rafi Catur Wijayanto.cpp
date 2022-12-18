#include <iostream>
using namespace std;

int main() {
    int jam;
    string NIP, Nama;
    float pokok, lembur, makan, transport;

    cout << "NIP: ";
    cin >> NIP;
    cout << "\nNama: ";
    cin >> Nama;
    cout << "\nJumlah jam kerja: ";
    cin >> jam;

    if (jam <=8) {
        pokok = jam*7500;
    } else {
        pokok = 8*7500;
    }

    if (jam > 8) {
        lembur = 1.5*pokok;
    } else {
        lembur = 0;
    }

    if (jam > 9) {
        makan = 10000;
    } else {
        makan = 0;
    }

    if (jam > 10) {
        transport = 13000;
    } else {
        transport = 0;
    }

    cout << "NIP: " << NIP << endl;
    cout << "Nama: " << Nama << endl;
    cout << "Gaji pokok: " << pokok << endl;
    cout << "Lembur: " << lembur << endl;
    cout << "Uang Makan: " << makan << endl;
    cout << "Transport: " << transport << endl;
}
