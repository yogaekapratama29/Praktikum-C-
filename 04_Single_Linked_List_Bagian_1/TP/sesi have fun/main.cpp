#include <iostream>
#include "list.h"
#include "list.cpp"

using namespace std;

int main() {
    List myList;
    int NIM[10];

    cout << "Masukkan NIM perdigit\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Digit " << i + 1 << " : ";
        cin >> NIM[i];
        myList.insertLast(NIM[i]);
    }
    cout << "Isi list : ";
    myList.display();

    return 0;
}
