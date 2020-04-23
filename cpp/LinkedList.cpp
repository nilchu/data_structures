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
        ~LinkedList() {
            while(root != nullptr) {
                Node* temp = root;
                root = root->next;
                delete temp;
            }
        }
        public:
        void push(int data) override {
            Node* new_node = new Node();
            new_node->data = data;
            new_node->next = this->root;
            this->root = new_node;
        };

        void pop() override {
            if(this->root != nullptr) {
                Node* temp = this->root;
                this->root = this->root->next;
                delete temp;
            }
        };

        void add(int data) override {
            if(!this->root) {
                this->root = new Node(data);
                return;
            }
            Node *n = this->root;

            while(n->next != NULL) {
                n = n->next;
            }

            n->next = new Node(data);
        };

        void remove(int data) override {
            
            // Check if root node exists
            if(!this->root) {
                return;
            }
            
            // Check if root node data matches
            if(this->root->data == data) {
                Node* temp = this->root;
                this->root = this->root->next;
                delete temp;
                return;
            }


            Node* curr = this->root;
            // Must be initialized as new Node! Otherwise seg fault!
            Node* prev = new Node();

            while(curr->next->data != data) {
                prev = curr;
                curr = curr->next;
            }

            prev->next = curr->next;
            delete curr;
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