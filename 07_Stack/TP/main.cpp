#include "stack.cpp"
#include <iostream>
using namespace std;

void fillStack(StackArray &S, const string &text) {
    for (char ch : text) {
        push(S, ch);
    }
}

int main() {
    StackArray S;
    createStack(S);

    
    fillStack(S, "IFLABJAYA");
    cout << "Output untuk NIM MOD (%) 4 == 0:\n";
    cout << "Isi Stack (sebelum pop):\n";
    printInfo(S, 4); 
    cout << endl;

    
    createStack(S);

    
    fillStack(S, "HALOBANDUNG");
    cout << "Output untuk NIM MOD (%) 4 == 1:\n";
    cout << "Isi Stack(sebelum pop):\n";
    printInfo(S, 7); 
    cout << endl;

   
    createStack(S);

    
    fillStack(S, "PERCAYADIRI");
    cout << "Output untuk NIM MOD (%) 4 == 2:\n";
    cout << "Isi Stack(sebelum pop):\n";
    printInfo(S, 4);
    cout << endl;

    
    createStack(S);

    
    fillStack(S, "STRUKTURDATA");
    cout << "Output untuk NIM MOD (%) 4 == 3:\n";
    cout << "Isi Stack(sebelum pop):\n";
    printInfo(S, 4); 
    cout << endl;

    return 0;
}
