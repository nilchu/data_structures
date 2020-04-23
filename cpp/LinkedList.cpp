#include <iostream>
#define PRINT(x) std::cout << x << std::endl 

namespace nilchu {

    class Deque {
        public:
            virtual void push(int data) = 0;
            virtual void pop() = 0;
            virtual void printList() = 0;
    };

    class Queue {
        public:
            virtual void add(int data) = 0;
            virtual void remove(int data) = 0;
            virtual void printList() = 0;
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


    class LinkedList: public Deque, public Queue {
        public:
            Node* root = nullptr;
        LinkedList() {};
        LinkedList(Node* root) {
            this->root = root;
        }
        public:
        void push(int data) override {
            Node* new_node = new Node();
            new_node->data = data;
            new_node->next = this->root;
            this->root = new_node;
        };

        void pop() override {
            this->root = this->root->next;
        };

        void add(int data) override {
            Node* n = this->root;

            while(n->next != NULL) {
                n = n->next;
            }

            n->next = new Node(data);
        };

        void remove(int data) override {
            Node* n = this->root;
            
            while(n->next->data != data) {
                n = n->next;
            }

            n->next = n->next->next;
        };

        void printList() override {
            Node* n = this->root;
            while(n != NULL) {
                PRINT(n->data);
                n = n->next;
            }
        }

    };
}