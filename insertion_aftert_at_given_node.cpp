#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;
};

void insertion_at_a_certain_node(node*ptr, int new_data){
    node*ptr2 = new node();
    ptr2 -> data = new_data;
    ptr2 -> prev = ptr;
    ptr2 -> next = ptr -> next;
    ptr -> next = ptr2;
    if(ptr2 -> next != NULL){
        ptr2 -> next -> prev = ptr2;
    }    
}

void display(node*n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }

}

int main(){
    node*head = NULL;
    node*second = NULL;
    node*third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head ->data = 10;
    head ->next = second;
    head ->prev = NULL;

    second -> data =20;
    second -> next = third;
    second -> prev = head;

    third -> data = 30;
    third -> next = NULL;
    third -> prev = second;

    insertion_at_a_certain_node(head->next,50);
    display(head);
    return 0;
}