#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
};

void at_the_end(node**last, int new_data){
    node*temp = new node();
    temp -> data = new_data;
    temp -> next = (*last)-> next;
    (*last) -> next = temp;
    (*last) = temp;
}

void display(node*head){
    node*temp = head;
    do{
        cout<<temp -> data<< " ";
        temp = temp -> next;
    }
    while(temp != head);
    cout<<endl;
}

int main(){
    node*head = new node();
    node*second = new node();
    node*third = new node();

    head -> data = 20;
    head -> next = second;

    second -> data = 30;
    second -> next = third;

    third -> data = 40;
    third -> next = head;

    at_the_end(&third,67);
    display(head);
    return 0;
}