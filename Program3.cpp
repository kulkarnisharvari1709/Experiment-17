#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void addStart(Node*& head, int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

void display(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    addStart(head, 30);
    addStart(head, 20);
    addStart(head, 10);

    cout << "Linked List after adding nodes at start: ";
    display(head);

    return 0;
}
