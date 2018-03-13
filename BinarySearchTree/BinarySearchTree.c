//
//  BinarySearchTree.c
//  cTest
//
//  Created by My Nguyen on 3/13/18.
//  Copyright © 2018 My Nguyen. All rights reserved.
//

#include <stdlib.h>
#include "BinarySearchTree.h"

Node * newNode(int key) {
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
Node * insert(Node * root, int key) {
    if (root == NULL) {
        return newNode(key);
    }
    
    if(key < root->key)
        root->left = insert(root->left, key);
    else if(key > root->key)
        root->right = insert(root->right, key);
    
    return root;
}

Node * search(Node * root, int key) {
    if (root == NULL || key == root->key)
        return root;
    
    if (key < root->key)
        return search(root->left, key);
    else if(key > root->key)
        return search(root->right, key);
    
    return NULL;
}

Node * getMinNode(Node * root) {
    Node * curr = root;
    
    while (curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

Node * delete(Node * root, int key) {
    if (root == NULL) {
        return root;
    }
    
    if (key < root->key) {
        root->left = delete(root->left, key);
    } else if(key > root->key) {
        root->right = delete(root->right, key);
    } else {
        if (root->left == NULL) {
            Node * temp = root->right;
            free(root);
            return temp;
        } else if(root->right == NULL) {
            Node * temp = root->left;
            free(root);
            return temp;
        }
        
        Node * temp = getMinNode(root->right);
        
        root->key = temp->key;
        
        root->right = delete(root->right, temp->key);
    }
    
    return root;
}

void printInorder(Node * root) {
    if(root) {
        printInorder(root->left);
        printf("%d ", root->key);
        printInorder(root->right);
    }
}
void printPreorder(Node * root) {
    if(root) {
        printf("%d ", root->key);
        printPreorder(root->left);
        printPreorder(root->right);
    }
}
void printPostorder(Node * root) {
    if(root) {
        printPostorder(root->left);
        printPostorder(root->right);
        printf("%d ", root->key);
    }
}
