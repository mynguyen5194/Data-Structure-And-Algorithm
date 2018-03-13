//
//  LinkedList.h
//  cTest
//
//  Created by My Nguyen on 3/13/18.
//  Copyright © 2018 My Nguyen. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>

struct Node {
    int data;
    struct Node * next;
};

void insert(struct Node ** head, int data, int pos);
void append(struct Node ** head, int data);
void delete(struct Node ** head, int data);
int reverse(struct Node ** head);
int search(struct Node * head, int data);
void print(struct Node * head);

#endif /* LinkedList_h */
