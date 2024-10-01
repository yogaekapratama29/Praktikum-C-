#include <iostream>
#include <stdlib.h>

using namespace std;

int maks3(int a, int b, int c);

int main(){
    int x,y,z;
    cout << "Masukan Nilai Bilangan ke-1 = ";
    cin >> x;
    cout << "Masukan Nilai Bilangan ke-2 = ";
    cin >> y;
    cout << "Masukan Nilai Bilangan ke-3 = ";
    cin >> z;
    cout << "Nilai Maksimumnya adalah = " << maks3(x,y,z);
    cin.get();
    return 0;
}
// Fungsi
int maks3(int a, int b, int c){
    int temp_max = a;
    if(b > temp_max)
    temp_max = b;
    if (c > temp_max)
    temp_max = c;
    return (temp_max);
}