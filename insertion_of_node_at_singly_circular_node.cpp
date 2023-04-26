#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void insertion_at_begin(node**head_ref, int new_data){
    node*temp = new node();
    temp -> data = new_data;
    temp -> next = (*head_ref);
    node*p = (*head_ref);
    while(p-> next != (*head_ref)){
        p = p->next;
    }
    (*head_ref)=temp;
    p->next = (*head_ref);
}

void display(node*head){
    node*temp =head;
    do{
        cout<<temp->data<<" ";
        temp = temp -> next; 
    }
    while(temp != head);
    cout<<endl;
}
int main(){
    node*head = new node();
    node*second = new node();
    node*third = new node();

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = head;

    insertion_at_begin(&head,67);
    display(head);

}