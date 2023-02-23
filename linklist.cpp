#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList() {
        head = NULL;
    }

    void insert(int data) {
        Node* new_node = new Node();
        new_node->data = data;
        new_node->next = head;
        head = new_node;
    }

    void print_list() {
        Node* current_node = head;
        while (current_node) {
            cout << current_node->data << " ";
            current_node = current_node->next;
        }
        cout << endl;
    }

private:
    Node* head;
};

int main() {
    LinkedList linked_list;
    linked_list.insert(3);
    linked_list.insert(5);
    linked_list.insert(7);
    linked_list.print_list();
    return 0;
}
