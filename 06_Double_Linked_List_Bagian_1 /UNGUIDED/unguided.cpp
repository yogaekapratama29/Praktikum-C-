#include <iostream>
#include <string>
using namespace std;


struct Node {
    int ID;
    string judul;
    string penulis;
    Node* prev;
    Node* next;
};


Node* createNode(int ID, string judul, string penulis) {
    Node* newNode = new Node();
    newNode->ID = ID;
    newNode->judul = judul;
    newNode->penulis = penulis;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}


void insertBook(Node*& head, int ID, string judul, string penulis) {
    Node* newNode = createNode(ID, judul, penulis);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}


void displayFromStart(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->ID << " - " << temp->judul << " by " << temp->penulis << endl;
        temp = temp->next;
    }
}


void displayFromEnd(Node* head) {
    if (head == nullptr) return;
    
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    while (temp != nullptr) {
        cout << temp->ID << " - " << temp->judul << " by " << temp->penulis << endl;
        temp = temp->prev;
    }
}

int main() {
    Node* head = nullptr;
    

    insertBook(head, 101, "Book One", "Author A");
    insertBook(head, 102, "Book Two", "Author B");
    insertBook(head, 103, "Book Three", "Author C");
    

    cout << "Menampilkan semua buku dari awal ke akhir:\n";
    displayFromStart(head);
    
    cout << "\nMenampilkan semua buku dari akhir ke awal:\n";
    displayFromEnd(head);
    
    return 0;
}
 