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
    ll.pop();
    ll.printList();
};