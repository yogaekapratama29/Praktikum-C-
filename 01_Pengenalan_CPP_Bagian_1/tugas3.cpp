#include <iostream>

using namespace std;

int main(){
    int inp;
    cout << "Input : " << endl;
    cin >> inp;
    cout << " Output : " << endl;

    // untuk looping di baris
    for (int i = inp;i >= 1; i--){
        // untuk looping bagian kiri dari angka
        for(int j = i;j >= 1;j--){
            cout << j;
        }

        // untuk bagian tengah menggunakan * untuk pemisah
        cout << "*";

        // untuk looping bagian kanan dari angka
        for(int j = 1 ;j <= i; j++){
            cout << j;
        }
        // untuk membuat output nya bertingkat ke bawah
        cout << endl;
    }
    // untuk akhir *
    cout << " * " << endl;
    return 0;
}