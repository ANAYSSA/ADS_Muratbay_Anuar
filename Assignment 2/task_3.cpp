#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void pushback(Node*& head,int value){
    Node* newnode = new Node;
    (*newnode).data = value;
    (*newnode).next = nullptr;

    if(head==nullptr){
        head=newnode;
        return;
    }

    Node* temp=head;
    while((*temp).next!=nullptr){
        temp=(*temp).next;
    }

    (*temp).next=newnode;
}

void removeLast(Node*& head){
    if(head==nullptr) return;

    if((*head).next==nullptr){
        delete head;
        head=nullptr;
        return;
    }

    Node* temp=head;

    while((*(*temp).next).next!=nullptr){
        temp=(*temp).next;
    }

    delete (*temp).next;
    (*temp).next=nullptr;
}

void print(Node* head){
    while(head!=nullptr){
        cout<<(*head).data<<" ";
        head=(*head).next;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    Node* head=nullptr;
    pushback(head,a);
    pushback(head,b);
    pushback(head,c);

    removeLast(head);
    print(head);
}