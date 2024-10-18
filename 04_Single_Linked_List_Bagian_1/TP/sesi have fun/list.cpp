#include "list.h"
#include <iostream>
using namespace std;

// menggunakan :: untuk inisialisasi method di luar list.h
List::List() {
    head = nullptr;
}
List::~List() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
void List::insertLast(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void List::insertAfter(int key, int data) {
    Node* temp = head;
    while (temp != nullptr && temp->data != key) {
        temp = temp->next;
    }
    if (temp != nullptr) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void List::deleteLast() {
    if (head == nullptr) return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
    } else {
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
}
void List::deleteAfter(int key) {
    Node* temp = head;
    while (temp != nullptr && temp->data != key) {
        temp = temp->next;
    }
    if (temp != nullptr && temp->next != nullptr) {
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    }
}
Node* List::searchInfo(int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key)
            return temp;
        temp = temp->next;
    }
    return nullptr;
}
void List::display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
