#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node * newNode(int data);
void insert(struct Node ** head, int data, int pos);
void append(struct Node ** head, int data);
void delete(struct Node ** head, int data);
int reverse(struct Node ** head);
int search(struct Node * head, int data);
struct Node * hasCycle(struct Node * head);
void removeCycle(struct Node * head, struct Node * cycleNode);
struct Node * getFirstCycleNode(struct Node * head, struct Node * cycleNode);
void print(struct Node * head);

#endif /* LinkedList_h */
