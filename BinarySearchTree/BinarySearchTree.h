//
//  BinarySearchTree.h
//  cTest
//
//  Created by My Nguyen on 3/13/18.
//  Copyright © 2018 My Nguyen. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include <stdio.h>

typedef struct {
    int key;
    struct Node *left, *right;
}Node;

Node * newNode(int key);
Node * insert(Node * root, int key);
Node * search(Node * root, int key);
Node * delete(Node * root, int key);

void printInorder(Node * root);
void printPreorder(Node * root);
void printPostorder(Node * root);

#endif /* BinarySearchTree_h */
