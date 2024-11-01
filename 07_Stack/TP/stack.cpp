#include "stack.h"
#include <iostream>
using namespace std;

void createStack(StackArray &S) {
    S.Top = 0;
}

bool isEmpty(StackArray S) {
    return S.Top == 0;
}

bool isFull(StackArray S) {
    return S.Top == MAX_SIZE;
}

void push(StackArray &S, infotype x) {
    if (!isFull(S)) {
        S.Top++;
        S.info[S.Top] = x;
    } else {
        cout << "Stack sudah full. Tidak bisa push element.\n";
    }
}

infotype pop(StackArray &S) {
    if (!isEmpty(S)) {
        infotype x = S.info[S.Top];
        S.Top--;
        return x;
    } else {
        cout << "Stack kosong. Tidak bisa pop element.\n";
        return '\0';
    }
}


void printInfo(StackArray S, int lastN) {
    if (!isEmpty(S)) {
        
        for (int i = 1; i <= S.Top; i++) {
            cout << S.info[i] << " ";
        }
        cout << endl;

        int startIdx = (S.Top >= lastN) ? S.Top - lastN + 1 : 1;
        for (int i = startIdx; i <= S.Top; i++) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack Kosong.\n";
    }
}
