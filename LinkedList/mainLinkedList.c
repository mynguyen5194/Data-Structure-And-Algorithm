#include <stdio.h>
#include "LinkedList.h"

int main(int argc, const char * argv[]) {
    struct Node * head = NULL;
    
    printf("Test Insert, Append, and Print:\n");
    insert(&head, 5, 0);
    append(&head, 6);
    append(&head, 7);
    insert(&head, 10, 3);
    append(&head, 9);
    print(head);
    
    delete(&head, 7);
    print(head);
    
    printf("\nTest Search:\n");
    int res = search(head, 9);
    printf("Res = %d\n", res);
    
    printf("\nTest Reverse:\n");
    reverse(&head);
    print(head);
    
    printf("\nTest hasCycle and removeCycle:\n");
    struct Node *headCycle = newNode(1);
    headCycle->next = newNode(2);
    headCycle->next->next = newNode(3);
    headCycle->next->next->next = newNode(4);
    headCycle->next->next->next->next = newNode(5);
    headCycle->next->next->next->next->next = headCycle->next;
    
    printf("Before removing the cycle\n");
    struct Node * cycleNode = hasCycle(headCycle);
    if (cycleNode) {
        printf("Contain cycle\n");
    } else {
        printf("Contain no cycle\n");
    }
    
    printf("\nAfter removing the cycle\n");
    removeCycle(headCycle, cycleNode);
    cycleNode = hasCycle(headCycle);
    if (cycleNode) {
        printf("Contain cycle\n");
    } else {
        printf("Contain no cycle\n");
    }
    
    
    
    return 0;
}
