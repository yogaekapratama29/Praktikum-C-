#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

struct DoublyLinkedList {
    Node* head;
    Node* tail;
};


Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->prev = newNode->next = nullptr;
    return newNode;
}


void initList(DoublyLinkedList &dll) {
    dll.head = dll.tail = nullptr;
}


void insertLast(DoublyLinkedList &dll, int data) {
    Node* newNode = createNode(data);
    if (dll.tail == nullptr) {
        dll.head = dll.tail = newNode;
    } else {
        newNode->prev = dll.tail;
        dll.tail->next = newNode;
        dll.tail = newNode;
    }
}


void displayForward(DoublyLinkedList dll) {
    Node* temp = dll.head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) {
            cout << " <-> ";
        }
        temp = temp->next;
    }
    cout << endl;
}


void displayBackward(DoublyLinkedList dll) {
    Node* temp = dll.tail;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->prev != nullptr) {
            cout << " <-> ";
        }
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    DoublyLinkedList dll;
    initList(dll);

 
    insertLast(dll, 1);  
    insertLast(dll, 2);  
    insertLast(dll, 3);  
    insertLast(dll, 4);  

   
    cout << "Daftar elemen dari depan ke belakang: ";
    displayForward(dll); 

   
    cout << "Daftar elemen dari belakang ke depan: ";
    displayBackward(dll);  

    return 0;
}
