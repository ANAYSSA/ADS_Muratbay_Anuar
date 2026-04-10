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

void insertAtPosition(Node*& head,int value,int pos){
    if(pos==0){
        Node* newnode=new Node;
        (*newnode).data=value;
        (*newnode).next=head;
        head=newnode;
        return;
    }

    Node* newnode=new Node;
    (*newnode).data=value;

    Node* temp=head;

    for(int i=0;i<pos-1 && temp!=nullptr;i++){
        temp=(*temp).next;
    }

    if(temp==nullptr) return;

    (*newnode).next=(*temp).next;
    (*temp).next=newnode;
}

void print(Node* head){
    while(head!=nullptr){
        cout<<(*head).data<<" ";
        head=(*head).next;
    }
}

int main(){
    int a,b,val,pos;
    cin>>a>>b>>val>>pos;

    Node* head=nullptr;
    pushback(head,a);
    pushback(head,b);

    insertAtPosition(head,val,pos);
    print(head);
}