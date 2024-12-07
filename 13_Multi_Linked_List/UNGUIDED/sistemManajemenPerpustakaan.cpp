#include <iostream>
#include <string>
#include <list>
using namespace std;


struct Buku {
    string judulBuku;
    string tanggalPengembalian;


    Buku(string judul, string tanggal)
        : judulBuku(judul), tanggalPengembalian(tanggal) {}
};


struct Anggota {
    string namaAnggota;
    string idAnggota;
    list<Buku> daftarBuku;

   
    Anggota(string nama, string id)
        : namaAnggota(nama), idAnggota(id) {}
};


void tampilkanAnggota(const list<Anggota> &anggotaList) {
    for (const auto &anggota : anggotaList) {
        cout << "Anggota: " << anggota.namaAnggota << " (ID: " << anggota.idAnggota << ")\n";
        for (const auto &buku : anggota.daftarBuku) {
            cout << "  Buku: " << buku.judulBuku << ", Pengembalian: " << buku.tanggalPengembalian << "\n";
        }
    }
    cout << endl;
}

int main() {

    list<Anggota> anggotaList;

    
    Anggota rani("Rani", "A001");
    rani.daftarBuku.push_back(Buku("Pemrograman C++", "01/12/2024"));
    anggotaList.push_back(rani);

    Anggota dito("Dito", "A002");
    dito.daftarBuku.push_back(Buku("Algoritma Pemrograman", "15/12/2024"));
    anggotaList.push_back(dito);

    Anggota vina("Vina", "A003");
    anggotaList.push_back(vina);

  
    for (auto &anggota : anggotaList) {
        if (anggota.namaAnggota == "Rani") {
            anggota.daftarBuku.push_back(Buku("Struktur Data", "10/12/2024"));
        }
    }

    
    auto it = anggotaList.begin();
    while (it != anggotaList.end()) {
        if (it->namaAnggota == "Dito") {
            it = anggotaList.erase(it);
        } else {
            ++it;
        }
    }


    tampilkanAnggota(anggotaList);

    return 0;
}
