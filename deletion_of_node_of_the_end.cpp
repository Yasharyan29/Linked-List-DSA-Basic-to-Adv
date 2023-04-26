#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void deletion(node**head_ref){
    node*p = *head_ref;
    node *p1;
    while(p -> next != NULL){
        p1 = p;
        p = p->next;
    }
    p1 -> next = NULL;
    delete (p);
}

void display(node*n){
    while( n != NULL){
        cout<<n->data<<" ";
        n= n->next;
    }
}

int main(){
    node*head = NULL;
    node*second = NULL;
    node*third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data =30;
    third -> next = NULL;

    deletion(&head);
    display(head);
}