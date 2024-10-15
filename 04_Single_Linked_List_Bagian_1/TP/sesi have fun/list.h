#ifndef LIST_H
#define LIST_H

struct Node {
    int data;
    Node* next;
};

class List {
private:
    Node* head;
public:
    List();
    ~List();
    void insertLast(int data);
    void insertAfter(int key, int data);
    void deleteLast();
    void deleteAfter(int key);
    Node* searchInfo(int key);
    void display();
};

#endif
