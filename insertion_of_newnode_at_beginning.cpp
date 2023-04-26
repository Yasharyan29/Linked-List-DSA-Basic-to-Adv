#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void insertion_at_begin(node**head_ref,int new_data){
    //alloacte the dynamic memory spacing for the new node
    node*new_node = new node();

    //put the data in the new node 
    new_node -> data =new_data;

    //now we have to put the address of the previous head to the new head by head_ref
    new_node -> next = (*head_ref);

    //now we have to shift our head ref from previous head to the new_node 
    (*head_ref) =  new_node;
    
}

void display(node*n){
    
    while(n != NULL){
        cout<< n->data<<" ";
        n  = n -> next;
    }

}

int main(){
    node*head = NULL;
    node*second = NULL; 
    node*third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head ->data = 20;
    head -> next = second;

    second ->data = 30;
    second -> next = third;

    third ->data = 40;
    third -> next = NULL;

    insertion_at_begin(&head,10);
    display(head);
    return 0;
}