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
};