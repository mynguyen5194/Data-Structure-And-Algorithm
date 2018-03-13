//
//  main.c
//  cTest
//
//  Created by My Nguyen on 3/13/18.
//  Copyright © 2018 My Nguyen. All rights reserved.
//

#include <stdio.h>
#include "LinkedList.h"

int main(int argc, const char * argv[]) {
    struct Node * head = NULL;
    
    insert(&head, 5, 0);
    append(&head, 6);
    append(&head, 7);
    insert(&head, 10, 3);
    append(&head, 9);
    print(head);
    
    delete(&head, 7);
    print(head);
    
    int res = search(head, 9);
    printf("Res = %d\n", res);
    
    reverse(&head);
    print(head);
    
    return 0;
}
