#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    vector<int> dataArray;
    vector<int> genap;
    vector<int> ganjil;

    // Input data
    cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        dataArray.push_back(num);
        if (num % 2 == 0) {
            genap.push_back(num);
        } else {
            ganjil.push_back(num);
        }
    }
    // Menampilkan Beberapa Kode yang di inputkan
    cout << "Data Array : ";
    for (int i = 0; i < dataArray.size(); i++) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    // Mencari Nomor Genap
    cout << "Nomor Genap : ";
    for (int i = 0; i < genap.size(); i++) {
        cout << genap[i];
        if (i != genap.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    // Mencari Nomor Ganjil
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < ganjil.size(); i++) {
        cout << ganjil[i];
        if (i != ganjil.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
