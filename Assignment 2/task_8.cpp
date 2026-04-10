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

void combineLists(Node*& head1,Node* head2){
    if(head1==nullptr){
        head1=head2;
        return;
    }

    Node* temp=head1;

    while((*temp).next!=nullptr){
        temp=(*temp).next;
    }

    (*temp).next=head2;
}

void print(Node* head){
    while(head!=nullptr){
        cout<<(*head).data<<" ";
        head=(*head).next;
    }
}

int main(){
    Node* head1=nullptr;
    Node* head2=nullptr;

    pushback(head1,1);
    pushback(head1,2);

    pushback(head2,3);
    pushback(head2,4);

    combineLists(head1,head2);
    print(head1);
}