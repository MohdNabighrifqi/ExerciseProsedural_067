#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const int jumlahKandidat = 5;
    string nama[jumlahKandidat];
    string status[jumlahKandidat];

    for (int i = 0; i < jumlahKandidat; i++) {
        cout << "Masukkan nama kandidat " << i + 1 << ": ";
        cin >> nama[i];

        double nilaiMatematika, nilaibahasa_inggris;

        cout << "Masukan nilai Matematika: ";
        cin >> nilaiMatematika;

        cout << "Masukan nilai bahasa inggris: ";
        cin >> nilaibahasa_inggris;

        double rataRata = (nilaiMatematika + nilaibahasa_inggris) / 2.0;
        if (rataRata >= 70.0 && nilaiMatematika > 80.0) {
            status[i] = "diterima";
        }
        else {
            status[i] = "tidak diterima";
        }
    }

    cout << "================" << endl;
    cout << "                " << endl;
    cout << left << setw(10) << "Status" << "Name" << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i < jumlahKandidat; i++) {
        cout << left << setw(10) << nama[i] << status[i] << endl;
    }

    return 0;
}
cout << left << setw(10) << nama[i] << status[i] << endl;
