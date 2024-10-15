#include <iostream>

using namespace std;

int main(){
    int a, b, bilangan;

    cout << "Masukan batas bawah : " << endl;
    cin >> a;

    cout << "Masukan batas atas: " << endl;
    cin >> b;

    for ( bilangan = a; bilangan <= b; bilangan ++)
    {
       cout << "Bilangan " << bilangan << endl;
    }
    
    return 0;
}