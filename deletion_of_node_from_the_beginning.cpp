#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};
void deletion(node**header_ref){
    if(*header_ref==NULL){
        cout<<"empty";
        return;
    }
    node*p = *header_ref;
    *header_ref  = p -> next;
    delete (p);
    return;
} 
void display(node*n){
    while(n != NULL){
        cout<<n->data<<" ";
        n= n-> next;
    }
}

int main(){
    node*head = NULL;
    node*second= NULL;
    node*third= NULL;

    head = new node();
    second = new node();
    third = new node();

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;

    //function call
    deletion(&head);
    display(head);
    return 0;;
}