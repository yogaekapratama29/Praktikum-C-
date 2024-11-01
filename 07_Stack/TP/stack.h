#ifndef STACK_H
#define STACK_H

const int MAX_SIZE = 15;
typedef char infotype;

struct StackArray {
    infotype info[MAX_SIZE + 1];
    int Top;
};

void createStack(StackArray &S);
bool isEmpty(StackArray S);
bool isFull(StackArray S);
void push(StackArray &S, infotype x);
infotype pop(StackArray &S);
void printInfo(StackArray S, int lastN);

#endif
