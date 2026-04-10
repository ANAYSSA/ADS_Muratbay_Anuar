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

void sortList(Node* head){
    for(Node* i=head;i!=nullptr;i=(*i).next){
        for(Node* j=(*i).next;j!=nullptr;j=(*j).next){
            if((*i).data>(*j).data){
                int temp=(*i).data;
                (*i).data=(*j).data;
                (*j).data=temp;
            }
        }
    }
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

    sortList(head);
    print(head);
}