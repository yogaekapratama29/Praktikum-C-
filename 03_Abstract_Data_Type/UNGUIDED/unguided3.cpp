#include <iostream>
using namespace std;

void displayArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void swapElements(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {

    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    cout << "Array 1 sebelum di pindah posisi:" << endl;
    displayArray(array1);
    
    cout << "Array 2 sebelum di pindah posisi:" << endl;
    displayArray(array2);

    int *ptr1 = &array1[1][1];
    int *ptr2 = &array2[1][1];

    swapElements(ptr1, ptr2);

    cout << "Array 1 sesudah di pindah posisi::" << endl;
    displayArray(array1);
    
    cout << "Array 2 sesudah di pindah posisi::" << endl;
    displayArray(array2);

    return 0;
}
