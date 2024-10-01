#include <iostream>
#define MAX 5

using namespace std;


int main(){
    int i,j;
    float nilai_total, rata_rata;
    float nilai[MAX];
    static int nilai_tahun[MAX] [MAX] =
    {
        {0,2,2,0,0},
        {0,1,1,1,0},
        {0,3,3,3,0},
        {4,4,0,0,4},
        {5,0,0,0,5}
    };
    // Inisialisasi array dua dimensi
    for ( i = 0; i < MAX; i++)
    {
        cout << "Masukan Nilai ke- " << i + 1 << endl;
        cin >> nilai[i];
    }
    cout << "\n data nilai siswa : \n";

    // menampilkan array 1 dimensi
    for ( i = 0; i < MAX; i++)
    {
        cout << "Nilai k- "<< i+1 << "= " << nilai[i] <<endl;
        cout << "\n Nilai Tahunan : \n" <<endl;
    }
    
    // menampilkan array 2 dimensi
    for ( i = 0; i < MAX; i++)
    {
        for ( j = 0; j < MAX; j++)
        {
            cout << nilai_tahun [i] [j] << " ";
            cout << "\n";
        }
        
    }
    cin.get();
    return 0;
}