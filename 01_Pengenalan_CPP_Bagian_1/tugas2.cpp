#include <iostream>
#include <string>

using namespace std;

int main(){
    int angka;
    string satuan[] = {"nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan"};
    string belasan[] = {"sepuluh","sebelas","dua belas","tiga belas","empat belas","lima belas","enam belas","tujuh belas","delapan belas","sembilan belas"};
    string puluhan[] = {"","","dua puluh","tiga puluh","empat puluh","lima puluh","enam puluh","tujuh puluh","delapan puluh","sembilan puluh"};

    cout << "Masukan Angka dari (0-100) :" << endl;
    cin >> angka;

    if ( angka < 0 || angka >100)
    {
        cout << "Angka harus diantara 0 sampai 100" << endl;
    }else{
        if (angka == 0) {
            cout << angka << " : " << satuan[0] << endl;
        }
        else if (angka < 10)
        {
            cout << angka << " : " << satuan[angka] << endl;
        }else if (angka < 20)
        {
            cout << angka << " : " << belasan[angka - 10] << endl;
        }else if (angka <= 100)
        {
            int puluh = angka /10;
            int satu = angka % 10;

            cout << angka << " : " << puluhan[puluh];
            if (satu > 0)
            {
                cout << " " << satuan[satu];
            }
            cout << endl;
        }
        
    }
     return 0;
}