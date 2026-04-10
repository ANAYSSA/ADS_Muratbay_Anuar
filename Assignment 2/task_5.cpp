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

bool search(Node* head,int value){
    while(head!=nullptr){
        if((*head).data==value) return true;
        head=(*head).next;
    }
    return false;
}

int main(){
    int a,b,x;
    cin>>a>>b>>x;

    Node* head=nullptr;
    pushback(head,a);
    pushback(head,b);

    cout<<search(head,x);
}