#include <iostream>
#include "queue.h"
using namespace std;

// void createQueue(Queue &Q) {
//     Q.head = -1;
//     Q.tail = -1;
// }

// bool isEmptyQueue(const Queue &Q) {
//     return Q.tail == -1;
// }

// bool isFullQueue(const Queue &Q) {
//     return Q.tail == MAX_SIZE - 1;
// }

// void enqueue(Queue &Q, infotype x) {
//     if (isEmptyQueue(Q)) {
//         Q.head = 0;
//         Q.tail = 0;
//         Q.info[Q.tail] = x;
//     } else if (!isFullQueue(Q)) {
//         Q.tail++;
//         Q.info[Q.tail] = x;
//     } else {
//         cout << "Queue is full!" << endl;
//     }
// }

// infotype dequeue(Queue &Q) {
//     if (!isEmptyQueue(Q)) {
//         infotype x = Q.info[Q.head];
//         for (int i = Q.head; i < Q.tail; i++) {
//             Q.info[i] = Q.info[i + 1];
//         }
//         Q.tail--;
//         if (Q.tail < Q.head) {
//             Q.head = -1;
//             Q.tail = -1;
//         }
//         return x;
//     } else {
//         cout << "Queue is empty!" << endl;
//         return -1;
//     }
// }

// void printInfo(const Queue &Q) {
//     cout << Q.head << " - " << Q.tail << "\t| ";
//     if (isEmptyQueue(Q)) {
//         cout << "empty queue" << endl;
//     } else {
//         for (int i = Q.head; i <= Q.tail; i++) {
//             cout << Q.info[i] << " ";
//         }
//         cout << endl;
//     }
// }

//Alternatif 2
// void createQueue(Queue &Q) {
//     Q.head = -1;
//     Q.tail = -1;
// }

// bool isEmptyQueue(const Queue &Q) {
//     return Q.head == -1 && Q.tail == -1; 
// }

// bool isFullQueue(const Queue &Q) {
//     return Q.tail == MAX_SIZE - 1;
// }

// void enqueue(Queue &Q, infotype x) {
//     if (isEmptyQueue(Q)) {
//         Q.head = 0;
//         Q.tail = 0;
//         Q.info[Q.tail] = x;
//     } else if (!isFullQueue(Q)) {
//         Q.tail++;
//         Q.info[Q.tail] = x;
//     } else {
//         cout << "Queue is full!" << endl;
//     }
// }

// infotype dequeue(Queue &Q) {
//     if (!isEmptyQueue(Q)) {
//         infotype x = Q.info[Q.head];
//         Q.head++;
//         if (Q.head > Q.tail) {
//             Q.head = -1;
//             Q.tail = -1;
//         }
//         return x;
//     } else {
//         cout << "Queue is empty!" << endl;
//         return -1;
//     }
// }

// void printInfo(const Queue &Q) {
//     cout << Q.head << " - " << Q.tail << "\t| ";
//     if (isEmptyQueue(Q)) {
//         cout << "empty queue" << endl;
//     } else {
//         for (int i = Q.head; i <= Q.tail; i++) {
//             cout << Q.info[i] << " ";
//         }
//         cout << endl;
//     }
// }



// Alternatif 3

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(const Queue &Q) {
    return Q.head == -1 && Q.tail == -1; 
}

bool isFullQueue(const Queue &Q) {
    return (Q.tail + 1) % MAX_SIZE == Q.head; 
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue is full!" << endl;
    } else {
        if (isEmptyQueue(Q)) {
            Q.head = 0;
        }
        Q.tail = (Q.tail + 1) % MAX_SIZE;
        Q.info[Q.tail] = x;
    }
}

infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue is empty!" << endl;
        return -1;
    } else {
        infotype x = Q.info[Q.head];
        if (Q.head == Q.tail) { 
            Q.head = -1;
            Q.tail = -1;
        } else {
            Q.head = (Q.head + 1) % MAX_SIZE; 
        }
        return x;
    }
}
void printInfo(const Queue &Q) {
    cout << Q.head << " - " << Q.tail << "\t| ";
    if (isEmptyQueue(Q)) {
        cout << "empty queue" << endl;
    } else {
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.info[i] << " ";
        }
        cout << endl;
    }
}
