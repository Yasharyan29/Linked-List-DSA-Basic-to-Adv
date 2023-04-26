#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void deletion(node**last){
    node*p;
    node*p1;
    p=(*last);
    p1=(*last);
    while(p1->next != (*last)){
        p1 = p1 ->next ; 
    }
    (*last) = p1;
    (*last) -> next = p -> next;
    delete(p);
}

void display(node*head){
    node*temp = head;
    do{
        cout<<temp-> data<<" ";
        temp = temp -> next;
    }
    while(temp != head);
}

int main (){
    node*head = new node();
    node*second = new node();
    node*third = new node();

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next =head;

    deletion(&head);
    display(head);
}