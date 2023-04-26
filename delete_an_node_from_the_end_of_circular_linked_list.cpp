#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node*next;
};

void deletion_at_end(node**last){
    node*p;
    node*p1;
    p = (*last);
    p1 = (*last);
    while(p1->next != (*last)){
        p1 = p1->next;
    }
    (*last) = p1;
    (*last) -> next = p-> next;
    delete(p);
}

void display(node*last){
    node*temp = last;
    do{
        cout<< temp->data<<" ";
        temp = temp -> next;
    }
    while(temp != last);
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

    third -> data = 30;
    third -> next = head;

    deletion_at_end(&third);
    display(head);

}