#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void at_certain_postion(node**prev_node, int new_data){
    node*temp = new node();
    temp -> next = (*prev_node) -> next;
    temp -> data = new_data;
    (*prev_node) -> next = temp;
} 

void display(node*head){
    node*temp = head;
    do{
        cout<<temp-> data<<" ";
        temp = temp -> next;
    }
    while(temp != head);
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

    at_certain_postion(&second,50);
    display(head);
    return 0;

}