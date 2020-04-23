#include <iostream>
#define PRINT(x) std::cout << x << std::endl 

namespace nilchu {

    class Deque {
        public:
            virtual void push();
            virtual void pop();
    };

    class Queue {
        public:
            virtual void add();
            virtual void remove();
    };

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


    class LinkedList: public Deque, Queue {
        public:
            Node* root;
        LinkedList() {};
        LinkedList(Node* root) {
            this->root = root;
        }

        void push(int data) {
            Node* new_node = new Node();
            new_node->data = data;
            new_node->next = this->root;
            this->root = new_node;
        }

        void pop() {

        }

        void add() {

        }

        void remove() {

        }

        void printList(Node* n) {
            while(n != NULL) {
                PRINT(n->data);
                n = n->next;
            }
        }

    };
}