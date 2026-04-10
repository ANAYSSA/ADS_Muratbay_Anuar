#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void pushback(Node*& head,int value){
    Node* newnode=new Node;
    (*newnode).data=value;
    (*newnode).next=nullptr;

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

void reverseList(Node*& head){
    Node* prev=nullptr;
    Node* current=head;
    Node* next=nullptr;

    while(current!=nullptr){
        next=(*current).next;
        (*current).next=prev;
        prev=current;
        current=next;
    }

    head=prev;
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

    reverseList(head);
    print(head);
}