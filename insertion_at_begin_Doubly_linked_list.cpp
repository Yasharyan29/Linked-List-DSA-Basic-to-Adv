#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;
};

void insertion_at_begin(node**head_ref, int new_data){
    //1.create a new node dynamically
    node*new_node = new node();

    //2.now put the data into the node 
    new_node->data = new_data;

    //3.now set the prev section of the node
    new_node ->prev = NULL;

    //4.now set the next section of the node
    new_node ->next =  (*head_ref);

    //5.now set the prev section of the head node
    (*head_ref)->prev = new_node;
    
    //6.just change the head pointers to the new node because the head pointed is pointing to the first node of linked list 
    (*head_ref) = new_node;
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

    head = new node();
    second = new node();
    third = new node();

    head -> data = 10;
    head -> next = second;
    head -> prev = NULL;

    second -> data = 20;
    second -> next = third;
    second -> prev = head;

    third ->data = 30;
    third -> next= NULL;
    third -> prev = second;

    //functiopn call
    insertion_at_begin(&head,70);
    display(head);
    return 0;
}