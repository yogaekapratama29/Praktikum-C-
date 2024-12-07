#include <iostream>
#include <string>
#include <list>
using namespace std;

struct Proyek {
    string namaProyek;
    int durasi;

    Proyek(string nama, int dur) : namaProyek(nama), durasi(dur) {}
};

struct Pegawai {
    string namaPegawai;
    string idPegawai;
    list<Proyek> daftarProyek;

    Pegawai(string nama, string id) : namaPegawai(nama), idPegawai(id) {}
};

void tampilkanPegawai(const list<Pegawai> &pegawaiList) {
    for (const auto &pegawai : pegawaiList) {
        cout << "Pegawai: " << pegawai.namaPegawai << " (ID: " << pegawai.idPegawai << ")\n";
        for (const auto &proyek : pegawai.daftarProyek) {
            cout << "  Proyek: " << proyek.namaProyek << ", Durasi: " << proyek.durasi << " bulan\n";
        }
    }
    cout << endl;
}

int main() {
   
    list<Pegawai> pegawaiList;

    Pegawai andi("Andi", "P001");
    andi.daftarProyek.push_back(Proyek("Aplikasi Mobile", 12));
    pegawaiList.push_back(andi);

    Pegawai budi("Budi", "P002");
    budi.daftarProyek.push_back(Proyek("Sistem Akuntansi", 8));
    pegawaiList.push_back(budi);

    Pegawai citra("Citra", "P003");
    citra.daftarProyek.push_back(Proyek("E-commerce", 10));
    pegawaiList.push_back(citra);

    for (auto &pegawai : pegawaiList) {
        if (pegawai.namaPegawai == "Andi") {
            pegawai.daftarProyek.push_back(Proyek("Analisis Data", 6));
        }
    }

 
    for (auto &pegawai : pegawaiList) {
        if (pegawai.namaPegawai == "Andi") {
            auto it = pegawai.daftarProyek.begin();
            while (it != pegawai.daftarProyek.end()) {
                if (it->namaProyek == "Aplikasi Mobile") {
                    it = pegawai.daftarProyek.erase(it);
                } else {
                    ++it;
                }
            }
        }
    }

  
    tampilkanPegawai(pegawaiList);

    return 0;
}

