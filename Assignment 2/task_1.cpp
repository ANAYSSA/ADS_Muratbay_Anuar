#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void addToBeginning(Node*& head, int value) {
    Node* newNode = new Node;
    (*newNode).data = value;
    (*newNode).next = head;
    head = newNode;
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << (*head).data << " ";
        head = (*head).next;
    }
}
int main () {
    int a, b;
    cin >> a >> b;

    Node* head = nullptr;

    addToBeginning(head, a);
    addToBeginning(head, b);
    printList(head);

}

