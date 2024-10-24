#include "doublelist.h"


void CreateList(List &L) {
    L.first = nullptr;
    L.last = nullptr;
}


ElmList* alokasi(kendaraan x) {
    ElmList* newElm = new ElmList();
    newElm->info = x;
    newElm->next = nullptr;
    newElm->prev = nullptr;
    return newElm;
}


void dealokasi(ElmList* P) {
    delete P;
}

void insertLast(List &L, ElmList* P) {
    if (L.first == nullptr) { 
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}


void printInfo(List L) {
    ElmList* temp = L.first;
    while (temp != nullptr) {
        cout << "Nomor Polisi: " << temp->info.nopol << endl;
        cout << "Warna: " << temp->info.warna << endl;
        cout << "Tahun: " << temp->info.thnBuat << endl;
        cout << endl;
        temp = temp->next;
    }
}


ElmList* findElm(List L, string nopol) {
    ElmList* temp = L.first;
    while (temp != nullptr) {
        if (temp->info.nopol == nopol) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

void deleteFirst(List &L) {
    if (L.first != nullptr) {
        ElmList* temp = L.first;
        if (L.first == L.last) {
            L.first = L.last = nullptr;
        } else {
            L.first = L.first->next;
            L.first->prev = nullptr;
        }
        dealokasi(temp);
    }
}


void deleteLast(List &L) {
    if (L.last != nullptr) {
        ElmList* temp = L.last;
        if (L.first == L.last) {
            L.first = L.last = nullptr;
        } else {
            L.last = L.last->prev;
            L.last->next = nullptr;
        }
        dealokasi(temp);
    }
}


void deleteAfter(List &L, ElmList* Prec) {
    if (Prec != nullptr && Prec->next != nullptr) {
        ElmList* del = Prec->next;
        Prec->next = del->next;
        if (del->next != nullptr) {
            del->next->prev = Prec;
        } else {
            L.last = Prec;
        }
        dealokasi(del);
    }
}
