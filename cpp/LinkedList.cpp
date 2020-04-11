#include <iostream>
#define PRINT(x) std::cout << x << std::endl 

namespace nilchu {

    class Node {
        public:
            int data;
            Node *next;

            Node() {};
            Node(int data) {
                this->data = data; 
                this->next = NULL;
            }
    };


    class LinkedList {
        public:
            Node* root;
        LinkedList() {};
        LinkedList(Node* root) {
            this->root = root;
        }

        void printList(Node* n) {
            while(n != NULL) {
                PRINT(n->data);
                n = n->next;
            }
        }

    };
}