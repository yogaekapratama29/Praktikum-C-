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

void insertSorted(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (!head || head->data >= value) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next && current->next->data < value) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}

int main() {
    Node* head = nullptr;
    int num;

 
    for (int i = 0; i < 4; i++) {
        cout << "Masukan Elemen " << i + 1 << ": ";
        cin >> num;
        insertSorted(head, num);
    }

   
    int newElement;
    cout << "Masukkan elemen yang akan disisipkan dalam urutan yang sudah diurutkan: ";
    cin >> newElement;
    insertSorted(head, newElement);


    cout << "List setelah vdi sisipkan: " << endl;
    displayList(head);

    return 0;
}
