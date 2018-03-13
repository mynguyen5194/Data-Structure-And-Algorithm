//
//  main.c
//  cTest
//
//  Created by My Nguyen on 3/13/18.
//  Copyright © 2018 My Nguyen. All rights reserved.
//

#include <stdio.h>
#include "BinarySearchTree.h"

int main(int argc, const char * argv[]) {
    Node * root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    
    printInorder(root);
    
    Node * res = search(root, 660);
    if(res != NULL) {
        printf("Res = %d \n", res->key);
    }
    
    delete(root, 50);
    printf("\n");
    printInorder(root);
    
    delete(root, 30);
    printf("\n");
    printInorder(root);
    
    delete(root, 80);
    printf("\n");
    printInorder(root);
    
    delete(root, 100);
    printf("\n");
    printInorder(root);
    printf("\n");

    
    return 0;
}
