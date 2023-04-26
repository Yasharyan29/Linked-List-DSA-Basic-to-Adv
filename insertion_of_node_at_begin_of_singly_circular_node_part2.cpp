#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void atbegin(node**last, int new_data){
    node*temp = new node();
    temp -> next = (*last) -> next;
    temp -> data = new_data;
    (*last) -> next = temp;
}

void display(node*last){
    node*temp = (last);
    do{
        cout<<temp -> data<<" ";
        temp = temp-> next;
    }
    while(temp != (last));
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

    atbegin(&third, 67);
    display(third -> next);
    return 0;
}