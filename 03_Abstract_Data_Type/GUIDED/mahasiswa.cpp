#include "mahasiswa.h"
#include <iostream>
using namespace std;


void inputMhs(mahasiswa &m){
    cout << "input nama = ";
    cin >> (m).nim;
    cout << "input nilai1 = ";
    cin >> (m).nilai1;
    cout << "input nilai2 = ";
    cin >> (m).nilai2;

    cin.get();
}


float rata2(mahasiswa m){
    return (m.nilai1 + m.nilai2)/2;
}