#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void append(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void searchElement(Node* head, int key) {
    Node* temp = head;
    int position = 1;
    bool found = false;

    while (temp != nullptr) {
        if (temp->data == key) {
            found = true;
            cout << "Elemen ditemukan pada posisi " << position << ", Address: " << temp << endl;
            break;
        }
        temp = temp->next;
        position++;
    }
    if (!found) {
        cout << "Elemen tidak di temukan di list." << endl;
    }
}

int main() {
    Node* head = nullptr;
    int num;


    for (int i = 0; i < 6; i++) {
        cout << "Masukan elemen " << i + 1 << ": ";
        cin >> num;
        append(head, num);
    }

    int searchKey;
    cout << "Masukan elemen yang ingin dicari : ";
    cin >> searchKey;

    searchElement(head, searchKey);

    return 0;
}
