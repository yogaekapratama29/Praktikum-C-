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


void insertFirst(DoublyLinkedList &dll, int data) {
    Node* newNode = createNode(data);
    if (dll.head == nullptr) {
        dll.head = dll.tail = newNode;
    } else {
        newNode->next = dll.head;
        dll.head->prev = newNode;
        dll.head = newNode;
    }
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

int main() {
    DoublyLinkedList dll;
    initList(dll);


    insertFirst(dll, 10);  
    insertFirst(dll, 5);   
    insertLast(dll, 20);   

    cout << "DAFTAR ANGGOTA LIST: ";
    displayForward(dll);  

    return 0;
}
