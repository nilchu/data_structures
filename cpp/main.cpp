#include <iostream>
#include "LinkedList.cpp"

using namespace nilchu;

int main() {
    LinkedList ll;

    ll.push(4);
    ll.push(3);
    ll.push(2);
    ll.push(1);


    ll.printList();
    PRINT("------------------");
    ll.pop();
    ll.printList();
    PRINT("------------------");
    ll.add(10);
    ll.add(20);
    ll.add(30);
    ll.printList();
    PRINT("------------------");
    ll.remove(3);
    ll.remove(10);
    ll.printList();
    PRINT("------------------");

    Deque* dq = new LinkedList();
    dq->push(1000);
    dq->printList();

    PRINT("------------------");

    Queue* qu = new LinkedList();
    (*qu).add(10000); // dot-notation as alternative to -> operator used above in Deque example
    (*qu).printList(); 
    
};