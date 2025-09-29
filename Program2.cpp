#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void addEnd(Node*& head, int value) {
    Node* newNode = new Node{value, NULL};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
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
    addEnd(head, 10);
    addEnd(head, 20);
    addEnd(head, 30);

    cout << "Linked List after adding nodes at end: ";
    display(head);

    return 0;
}
