//
//  LinkedList.c
//  cTest
//
//  Created by My Nguyen on 3/13/18.
//  Copyright © 2018 My Nguyen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


void insert(struct Node ** head, int data, int pos) {
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    
    // Insert in an empty linked list
    if(*head == NULL) {
        *head = newNode;
        newNode->next = NULL;
        return;
    }
    
    // Insert at head
    if(pos == 0) {
        newNode->next = *head;
        (*head)->next = newNode;
        return;
    }
    
    // Insert in the middle
    struct Node * ptr = *head;
    
    for(int i = 0; i < pos-1; i++) {
        // If pos exceeds linked list length, insert at the end
        if(ptr->next != NULL) {
            ptr = ptr->next;
        }
    }
    
    newNode->next = ptr->next;
    ptr->next = newNode;
    
}

void append(struct Node ** head, int data) {
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    
    if(*head == NULL) {
        *head = newNode;
        newNode->next = NULL;
        return;
    }
    
    struct Node * ptr = *head;
    while(ptr->next != NULL) {
        ptr = ptr->next;
    }
    
    ptr->next = newNode;
    newNode->next = NULL;
}

void delete(struct Node ** head, int data) {
    struct Node * ptr = *head;
    
    // If data is in the head
    if((*head)->data == data) {
        *head = (*head)->next;
        ptr->next = NULL;
        free(ptr);
        return;
    }
    
    // Loop until node with matching data is found
    while(ptr != NULL) {
        if(ptr->next->data == data) {
            break;
        }
        
        ptr = ptr->next;
    }
    
    if(ptr == NULL) {
        return;
    }
    
    struct Node * deleteNode = ptr->next;
    
    ptr->next = deleteNode->next;
    deleteNode->next = NULL;
    free(deleteNode);
}

int search(struct Node * head, int data) {
    if(head == NULL) {
        return -1;
    }
    
    struct Node * ptr = head;
    
    while(ptr) {
        if(ptr->data == data) {
            return ptr->data;
        }
        ptr = ptr->next;
    }
    
    return -1;
}

void print(struct Node * head) {
    struct Node * ptr = head;
    
    // printf("%d\n", head->data);
    
    while(ptr) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int reverse(struct Node ** head) {
    
    struct Node * curr = *head;
    struct Node * next = NULL;
    struct Node * prev = NULL;
    
    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
    
    return 0;
    
}
