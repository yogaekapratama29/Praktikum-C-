#include <iostream>
using namespace std;

void findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Nilai maksimum adalah: " << max << endl;
}

void findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Nilai minimum adalah: " << min << endl;
}

void findAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float average = (float)sum / n;
    cout << "Nilai rata-rata adalah: " << average << endl;
}

int main() {
    int n;
    
    // Input jumlah array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    
    int arr[n];
    
    // Input array dari pengguna
    cout << "Masukkan elemen-elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    int choice;
    
    do {
        cout << "\nMenu Pilihan:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                findMax(arr, n);
                break;
            case 2:
                findMin(arr, n);
                break;
            case 3:
                findAverage(arr, n);
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi!" << endl;
        }
    } while (choice != 4);

    return 0;
}
