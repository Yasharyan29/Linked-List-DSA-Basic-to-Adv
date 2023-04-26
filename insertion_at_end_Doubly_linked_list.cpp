#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;
};

void insertion_at_end(node**head_ref, int new_data){
    node*new_node = new node();
    node*p = (*head_ref);
    new_node -> data = new_data;
    new_node -> next = NULL;
    while(p->next != NULL){
        p = p->next;
    } 
    new_node ->prev = p;
        p->next = new_node;
}

void display(node*n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n -> next;
    }
}

int main(){
    node*head = NULL;
    node*second = NULL;
    node*third = NULL;

    head= new node();
    second= new node();
    third= new node();

    head -> data = 10;
    head -> next = second;
    head -> prev = NULL;

    second -> data = 20;
    second -> next = third;
    second -> prev = head;

    third -> data =30;
    third -> next = NULL;
    third -> prev = second;

    //function call
    insertion_at_end(&head,400);
    display(head);
    return 0;
}