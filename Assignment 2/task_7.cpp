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

void removeByValue(Node*& head,int value){
    if(head==nullptr) return;

    if((*head).data==value){
        Node* temp=head;
        head=(*head).next;
        delete temp;
        return;
    }

    Node* temp=head;

    while((*temp).next!=nullptr && (*(*temp).next).data!=value){
        temp=(*temp).next;
    }

    if((*temp).next!=nullptr){
        Node* del=(*temp).next;
        (*temp).next=(*del).next;
        delete del;
    }
}

void print(Node* head){
    while(head!=nullptr){
        cout<<(*head).data<<" ";
        head=(*head).next;
    }
}

int main(){
    int a,b,c,x;
    cin>>a>>b>>c>>x;

    Node* head=nullptr;
    pushback(head,a);
    pushback(head,b);
    pushback(head,c);

    removeByValue(head,x);
    print(head);
}