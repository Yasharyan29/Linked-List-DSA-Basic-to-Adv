#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void insert(node*prev_node,int new_data){
    if(prev_node == NULL){
        cout<<"the given previous node cannot be null: ";
        return ;
    }
    node*new_node = new node();
    new_node -> data = new_data;

    new_node -> next = prev_node ->next;

    prev_node -> next  = new_node;
}
void display (node*n){
    while(n != NULL){
        cout<<n -> data<<" ";
        n=n->next;
    }
}

int main(){
    node*head = NULL; 
    node*second = NULL;
    node*third = NULL;


    head = new node();
    second  = new node();
    third  = new node();


    head -> data=10;
    head -> next=second;

    second ->data=20;
    second -> next = third;

    third ->data = 30;
    third -> next = NULL;

    insert(second->next, 40);
    display(head);
    return 0;
}

