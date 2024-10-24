#include <iostream>
#include <string>
using namespace std;


struct Node {
    int NIM;
    string name;
    Node* next;
};


Node* createNode(int NIM, string name) {
    Node* newNode = new Node();
    newNode->NIM = NIM;
    newNode->name = name;
    newNode->next = nullptr;
    return newNode;
}

void insertStudent(Node*& head, int NIM, string name) {
    Node* newNode = createNode(NIM, name);
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

void searchStudent(Node* head, int NIM) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->NIM == NIM) {
            cout << "Mahasiswa ditemukan: " << temp->name << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Mahasiswa dengan NIM " << NIM << " tidak ditemukan" << endl;
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->NIM << " - " << temp->name << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = nullptr;
    
    insertStudent(head, 123, "Yoga Eka Pratama");
    insertStudent(head, 456, "M.Faris");
    insertStudent(head, 789, "Nizar Daffa Maulana");
    
    searchStudent(head, 123); 
    searchStudent(head, 111);
    
    return 0;
}
