#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;


void printMatrix(const vector<vector<int> >& matrix, const vector<string>& labels) {
    cout << "    ";
    for (const string& label : labels) cout << setw(5) << label;
    cout << endl;

    for (size_t i = 0; i < matrix.size(); ++i) {
        cout << setw(5) << labels[i];
        for (int val : matrix[i]) cout << setw(5) << val;
        cout << endl;
    }
}

int main() {
    int jumlahSimpul;
    cout << "Silakan masukan jumlah simpul: ";
    cin >> jumlahSimpul;

    vector<string> labels(jumlahSimpul);
    cout << "Silakan masukan nama simpul:\n";
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> labels[i];
    }

    vector<vector<int> > adjacencyMatrix(jumlahSimpul, vector<int>(jumlahSimpul));
    cout << "Silakan masukkan bobot antar simpul:\n";
    for (int i = 0; i < jumlahSimpul; ++i)
        for (int j = 0; j < jumlahSimpul; ++j) {
            cout << labels[i] << " --> " << labels[j] << ": ";
            cin >> adjacencyMatrix[i][j];
        }

    cout << "\nAdjacency Matrix:\n";
    printMatrix(adjacencyMatrix, labels);
    return 0;
}
