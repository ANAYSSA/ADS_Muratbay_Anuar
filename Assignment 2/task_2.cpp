#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void pushBack(Node*& head, int value) {
    Node* newNode = new Node;
    (*newNode).data = value;
    (*newNode).next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while ((*temp).next != nullptr) {
        temp = (*temp).next;
    }

    (*temp).next = newNode;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << (*head).data << " ";
        head = (*head).next;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    Node* head = nullptr;

    pushBack(head, a);
    pushBack(head, b);

    print(head);

    return 0;
}