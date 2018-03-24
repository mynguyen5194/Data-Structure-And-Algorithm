#include <stdio.h>
#include "MinHeap.h"

int main(int argc, const char * argv[]) {
    MinHeap * minHeap = newMinHeap(10);
    
    insert(minHeap, 3);
    insert(minHeap, 5);
    insert(minHeap, 6);
    insert(minHeap, 1);
    insert(minHeap, 4);
    insert(minHeap, 8);
    
    print(minHeap);
    
    delete(minHeap, 1);
    print(minHeap);
    
    
    return 0;
}
