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


void deleteFirst(DoublyLinkedList &dll) {
    if (dll.head == nullptr) {
        return;
    }
    Node* temp = dll.head;
    if (dll.head == dll.tail) {  
        dll.head = dll.tail = nullptr;
    } else {
        dll.head = dll.head->next;
        dll.head->prev = nullptr;
    }
    delete temp;
}


void deleteLast(DoublyLinkedList &dll) {
    if (dll.tail == nullptr) {
        return;
    }
    Node* temp = dll.tail;
    if (dll.head == dll.tail) { 
        dll.head = dll.tail = nullptr;
    } else {
        dll.tail = dll.tail->prev;
        dll.tail->next = nullptr;
    }
    delete temp;
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

int main() {
    DoublyLinkedList dll;
    initList(dll);


    insertLast(dll, 10);  
    insertLast(dll, 15);  
    insertLast(dll, 20);  

   
    deleteFirst(dll); 
    deleteLast(dll);  

    
    cout << "DAFTAR ANGGOTA LIST SETELAH PENGHAPUSAN: ";
    displayForward(dll);

    return 0;
}
