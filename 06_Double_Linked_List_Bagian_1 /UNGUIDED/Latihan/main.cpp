#include "doublelist.h"
#include "doublelist.cpp"

int main() {
    List L;
    CreateList(L);
    
    
    kendaraan v1 = {"D001", "Hitam", 90};
    kendaraan v2 = {"D003", "Putih", 70};
    kendaraan v3 = {"D004", "Kuning", 99};
    
    insertLast(L, alokasi(v1));
    insertLast(L, alokasi(v2));
    insertLast(L, alokasi(v3));
    
    cout << "DATA LIST 1:" << endl;
    printInfo(L); 
    
    
    string nopolSearch = "D001";
    ElmList* found = findElm(L, nopolSearch);
    if (found) {
        cout << "Nomor Polisi yang dicari: " << found->info.nopol << endl;
        cout << "Warna: " << found->info.warna << endl;
        cout << "Tahun: " << found->info.thnBuat << endl;
    } else {
        cout << "Nomor Polisi " << nopolSearch << " tidak ditemukan." << endl;
    }
    
   
    deleteFirst(L);  
    deleteLast(L);   
    
    cout << "DATA LIST 1 setelah penghapusan:" << endl;
    printInfo(L); 
    
    return 0;
}
