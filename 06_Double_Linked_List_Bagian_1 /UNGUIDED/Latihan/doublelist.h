#ifndef DOUBLELIST_H
#define DOUBLELIST_H

#include <iostream>
#include <string>
using namespace std;


struct kendaraan {
    string nopol;     
    string warna;     
    int thnBuat;      
};


struct ElmList {
    kendaraan info;
    ElmList* next;
    ElmList* prev;
};

struct List {
    ElmList* first;
    ElmList* last;
};


void CreateList(List &L);


ElmList* alokasi(kendaraan x);


void dealokasi(ElmList* P);


void insertLast(List &L, ElmList* P);

void printInfo(List L);


ElmList* findElm(List L, string nopol);


void deleteFirst(List &L);


void deleteLast(List &L);


void deleteAfter(List &L, ElmList* Prec);

#endif
