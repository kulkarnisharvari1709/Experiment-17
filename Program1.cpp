#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node;
    head->data = 10;
    head->next = NULL;

    cout << "Single Node Created: " << head->data << endl;
    return 0;
}
